#!/usr/bin/env python3
# 
# message_data_static disassembler/decompiler
# 

import re, struct
from os import path

# ===================================================
#   Util
# ===================================================

def as_hword_list(b):
    if len(b) % 2 != 0:
        return None
    return [h[0] for h in struct.iter_unpack(">H", b)]

def as_word_list(b):
    if len(b) % 4 != 0:
        return None
    return [i[0] for i in struct.iter_unpack(">I", b)]

def as_message_table_entry(b):
    if len(b) % 8 != 0:
        return None
    return [(e[0], e[1]>>0x4&0xF, e[1]&0xF, e[2]) for e in [i for i in struct.iter_unpack(">HBxI", b)]]

def segmented_to_physical(address):
    return address & ~0x07000000

# ===================================================
#   Decode message_data_static encoded strings
# ===================================================

"""
Special characters conversion
"""
charmap = {
    0x7F: '‾',
    0x80: 'À',
    0x81: 'î',
    0x82: 'Â',
    0x83: 'Ä',
    0x84: 'Ç',
    0x85: 'È',
    0x86: 'É',
    0x87: 'Ê',
    0x88: 'Ë',
    0x89: 'Ï',
    0x8A: 'Ô',
    0x8B: 'Ö',
    0x8C: 'Ù',
    0x8D: 'Û',
    0x8E: 'Ü',
    0x8F: 'ß',
    0x90: 'à',
    0x91: 'á',
    0x92: 'â',
    0x93: 'ä',
    0x94: 'ç',
    0x95: 'è',
    0x96: 'é',
    0x97: 'ê',
    0x98: 'ë',
    0x99: 'ï',
    0x9A: 'ô',
    0x9B: 'ö',
    0x9C: 'ù',
    0x9D: 'û',
    0x9E: 'ü',
    0x9F: '[A]',
    0xA0: '[B]',
    0xA1: '[C]',
    0xA2: '[L]',
    0xA3: '[R]',
    0xA4: '[Z]',
    0xA5: '[C-Up]',
    0xA6: '[C-Down]',
    0xA7: '[C-Left]',
    0xA8: '[C-Right]',
    0xA9: '▼',
    0xAA: '[Control Stick]',
    0xAB: '[D-Pad]',
}

control_codes = {
    '\x01': "NEWLINE",
    '\x02': "END",
    '\x04': "BOX_BREAK",
    '\x05': "COLOR",
    '\x06': "SHIFT",
    '\x07': "TEXTID",
    '\x08': "QUICKTEXT_ENABLE",
    '\x09': "QUICKTEXT_DISABLE",
    '\x0A': "PERSISTENT",
    '\x0B': "EVENT",
    '\x0C': "BOX_BREAK_DELAYED",
    '\x0D': "AWAIT_BUTTON_PRESS",
    '\x0E': "FADE",
    '\x0F': "NAME",
    '\x10': "OCARINA",
    '\x11': "FADE2",
    '\x12': "SFX",
    '\x13': "ITEM_ICON",
    '\x14': "TEXT_SPEED",
    '\x15': "BACKGROUND",
    '\x16': "MARATHON_TIME",
    '\x17': "RACE_TIME",
    '\x18': "POINTS",
    '\x19': "TOKENS",
    '\x1A': "UNSKIPPABLE",
    '\x1B': "TWO_CHOICE",
    '\x1C': "THREE_CHOICE",
    '\x1D': "FISH_INFO",
    '\x1E': "HIGHSCORE",
    '\x1F': "TIME",
}

color_type_default = {
    0x40 : "WHITE",
    0x41 : "RED",
    0x42 : "GREEN",
    0x43 : "BLUE",
    0x44 : "LIGHTBLUE",
    0x45 : "PINK",
    0x46 : "YELLOW",
    0x47 : "BLACK",
}

color_type_1 = {
    0x40 : "WHITE",
    0x41 : "TYPE1_ORANGE",
    0x42 : "TYPE1_GREEN",
    0x43 : "TYPE1_BLUE",
    0x44 : "TYPE1_LIGHTBLUE",
    0x45 : "TYPE1_PURPLE",
    0x46 : "TYPE1_YELLOW",
    0x47 : "BLACK",
}

color_type_5 = {
    0x40 : "TYPE5_BLACK",
    0x41 : "RED",
    0x42 : "GREEN",
    0x43 : "BLUE",
    0x44 : "LIGHTBLUE",
    0x45 : "PINK",
    0x46 : "YELLOW",
    0x47 : "BLACK",
}

highscores = {
    0x00 : "HIGHSCORE_HORSE_ARCHERY",
    0x01 : "HIGHSCORE_POE_POINTS",   
    0x02 : "HIGHSCORE_LARGEST_FISH", 
    0x03 : "HIGHSCORE_HORSE_RACE",   
    0x04 : "HIGHSCORE_MARATHON",     
    0x06 : "HIGHSCORE_DAMPE_RACE",   
}

def format_char(byte):
    return f"\\x{byte:02X}"

def decode(read_bytes, box_type):
    next_is_color = False
    next_is_highscore = False

    next_is_byte_mod = False
    next_is_box_break_delayed = False
    next_is_hword_mod = 0
    next_is_background = 0

    buf = []
    for byte in read_bytes:
        if next_is_byte_mod:
            #buf.append(format_hex(byte,1) + ") \"")
            value = "\"" + format_char(byte) + "\""
            if next_is_highscore:
                value = highscores[byte]
                next_is_highscore = False
            elif next_is_color:
                if box_type == 5:
                    value = color_type_5[byte]
                elif box_type == 1:
                    value = color_type_1[byte]
                else:
                    value = color_type_default[byte]
                next_is_color = False
            buf.append(value + ") \"") # + ("\n" if next_is_box_break_delayed else "")
            next_is_byte_mod = False
            next_is_box_break_delayed = False
        elif next_is_hword_mod == 1:
            #buf.append(format_hex(byte,1))
            buf.append("\"" + format_char(byte))
            next_is_hword_mod = 2
        elif next_is_hword_mod == 2:
            #buf.append(format_hex(byte,1).replace("0x","") + ") \"")
            buf.append(format_char(byte) + "\") \"")
            next_is_hword_mod = 0
        elif next_is_background == 1:
            #buf.append(format_hex(byte,1) + ", ")
            buf.append("\"" + format_char(byte) + "\", ")
            next_is_background = 2
        elif next_is_background == 2:
            #buf.append(format_hex(byte,1) + ", ")
            buf.append("\"" + format_char(byte) + "\", ")
            next_is_background = 3
        elif next_is_background == 3:
            #buf.append(format_hex(byte,1) + ") \"")
            buf.append("\"" + format_char(byte) + "\") \"")
            next_is_background = 0
        else:
            for ctrl in list(control_codes.keys()):
                if byte == ord(ctrl):
                    name = control_codes[ctrl]
                    # single bytes
                    if (name == "COLOR" or name == "SHIFT" or name == "BOX_BREAK_DELAYED" or 
                        name == "FADE" or name == "ITEM_ICON" or name == "TEXT_SPEED" or
                        name == "HIGHSCORE"):
                        buf.append("\" " + name + "(")
                        if name == "HIGHSCORE":
                            next_is_highscore = True
                        elif name == "COLOR":
                            next_is_color = True
                        elif name == "BOX_BREAK_DELAYED":
                            next_is_box_break_delayed = True
                        else:
                            next_is_box_break_delayed = False
                        next_is_byte_mod = True
                    # single halfwords
                    elif (name == "TEXTID" or name == "FADE2" or name == "SFX"):
                        buf.append("\" " + name + "(")
                        next_is_hword_mod = 1
                    # multiple bytes
                    elif (name == "BACKGROUND"):
                        buf.append("\" " + name + "(")
                        next_is_background = 1
                    elif (name == "BOX_BREAK"):
                        buf.append("\"" + name + "\"")
                    else:
                        if byte == 0x01: # real newlines
                            buf.append("\n")
                        elif byte == 0x02: # omit END ctrl code
                            buf.append("")
                        else:
                            buf.append("\" " + name + " \"")
                    break
            else:
                if byte in charmap:
                    buf.append(charmap[byte])
                else:
                    decoded = bytes([byte]).decode("ASCII")
                    if decoded == "\"":
                        decoded = "\\\""
                    buf.append(decoded)

    return "".join(buf)

# ===================================================
#   message entry tables
# ===================================================

textbox_type = {
    0: "BOX_NORMAL",
    1: "BOX_WOODEN",
    2: "BOX_BLUE",
    3: "BOX_OCARINA",
    4: "BOX_NONE_BOTTOM",
    5: "BOX_NONE_NO_SHADOW",
    0xB: "BOX_CREDITS",
}

textbox_ypos = {
    0: "POS_VARIABLE",
    1: "POS_TOP",
    2: "POS_BOTTOM",
    3: "POS_MIDDLE",
}

# message entry tables vrom addresses
nes_message_entry_table_addr = 0x00BC24C0
ger_message_entry_table_addr = 0x00BC66E8
fra_message_entry_table_addr = 0x00BC87F8
staff_message_entry_table_addr = 0x00BCA908
staff_message_entry_table_addr_end = 0x00BCAA90

nes_message_entry_table = []
ger_message_entry_table = []
fra_message_entry_table = []

combined_message_entry_table = []

staff_message_entry_table = []

def read_tables():
    global nes_message_entry_table
    global ger_message_entry_table
    global fra_message_entry_table

    global combined_message_entry_table
    global staff_message_entry_table

    baserom = None
    with open("baserom.z64","rb") as infile:
        baserom = infile.read()

    nes_message_entry_table = as_message_table_entry(baserom[nes_message_entry_table_addr:ger_message_entry_table_addr])

    ids = [entry[0] for entry in nes_message_entry_table if entry[0] != 0xFFFC]
    ger_message_entry_table = list(zip(ids,as_word_list(baserom[ger_message_entry_table_addr:  fra_message_entry_table_addr])))
    fra_message_entry_table = list(zip(ids,as_word_list(baserom[fra_message_entry_table_addr:staff_message_entry_table_addr])))

    for entry in nes_message_entry_table:
        if entry[0] != 0xFFFC:
            combined_message_entry_table.append((*entry, dict(ger_message_entry_table)[entry[0]], dict(fra_message_entry_table)[entry[0]]))
        else:
            combined_message_entry_table.append((*entry, None, None))

    staff_message_entry_table = as_message_table_entry(baserom[staff_message_entry_table_addr:staff_message_entry_table_addr_end])

# ===================================================
#   Run
# ===================================================

### TODO this is all awful
def cvt(m):
    return m.group(0).replace("\"\"","")

doubles = re.compile(r"(?<!\\)(\"\")")
def fixup_message(message):
    return re.sub(doubles, cvt, ("\"" + message.replace("\n","\\n\"\n\"") + "\"")).replace("\n ","\n").replace("BOX_BREAK\"","\nBOX_BREAK\n\"").replace("BOX_BREAK ","\nBOX_BREAK\n").strip()
###

def dump_all_text():
    # text id, ypos, type, nes, ger, fra
    messages = []
    for i,entry in enumerate(combined_message_entry_table,0):
        if not (entry[0] == 0xFFFD or entry[0] == 0xFFFF):
            next_entry = combined_message_entry_table[i+1]

            nes_offset = segmented_to_physical(entry[3])
            nes_length = next_entry[3] - entry[3]
            nes_text = ""
            with open("baserom/nes_message_data_static","rb") as infile:
                infile.seek(nes_offset)
                nes_text = fixup_message(decode(infile.read(nes_length), entry[1]).replace("\x00","",-1))

            ger_text = ""
            fra_text = ""
            if entry[0] != 0xFFFC:
                if next_entry[0] == 0xFFFC:
                    next_entry = combined_message_entry_table[i+2]
                ger_offset = segmented_to_physical(entry[4])
                ger_length = next_entry[4] - entry[4]
                with open("baserom/ger_message_data_static","rb") as infile:
                    infile.seek(ger_offset)
                    ger_text = fixup_message(decode(infile.read(ger_length), entry[1]).replace("\x00","",-1))
                
                fra_offset = segmented_to_physical(entry[5])
                fra_length = next_entry[5] - entry[5]
                with open("baserom/fra_message_data_static","rb") as infile:
                    infile.seek(fra_offset)
                    fra_text = fixup_message(decode(infile.read(fra_length), entry[1]).replace("\x00","",-1))

            messages.append((entry[0], entry[1], entry[2], nes_text, ger_text, fra_text))
        elif entry[0] == 0xFFFD:
            messages.append((entry[0], entry[1], entry[2], "\"\"", "\"\"", "\"\""))
        elif entry[0] == 0xFFFF:
            messages.append((entry[0], entry[1], entry[2], "///END///", "///END///", "///END///"))
        else:
            assert False , "What happened?"
    return messages

def dump_staff_text():
    #message_data_static_size = 0x00973F44 - 0x00973000 # TODO remove
    staff_message_data_static_size = path.getsize("baserom/staff_message_data_static")
    # text id, ypos, type, staff
    messages = []
    for i,entry in enumerate(staff_message_entry_table,0):
        if entry[0] != 0xFFFF:
            next_entry = staff_message_entry_table[i+1]
            staff_offset = segmented_to_physical(entry[3])
            staff_length = (staff_message_data_static_size if entry[0] == 0x052F else segmented_to_physical(next_entry[3])) - segmented_to_physical(entry[3])
            with open("baserom/staff_message_data_static","rb") as infile:
                infile.seek(staff_offset)
                messages.append((entry[0], entry[1], entry[2], fixup_message(decode(infile.read(staff_length), entry[1]).replace("\x00","",-1))))
        else:
            messages.append((entry[0], entry[1], entry[2], "///END///"))
    return messages

    # hacky way to ensure the staff message entry table is read all the way to the end

read_tables()
#print(combined_message_entry_table)
#print(staff_message_entry_table)

for message in dump_all_text():
    if message[3] == "///END///":
        print(f"DECLARE_MESSAGE_END()")
    else:
        out = ""
        if message[0] == 0xFFFC:
            out = "#ifdef DECLARE_MESSAGE_FFFC\n"
        out += f"DECLARE_MESSAGE(0x{message[0]:04X}, {textbox_type[message[1]]}, {textbox_ypos[message[2]]},\
\n{message[3]}\n,\
\n{message[4]}\n,\
\n{message[5]}\n\
)"
        if message[0] == 0xFFFC:
            out += "\n#endif"
        out += "\n"
        print(out)

"""
for message in dump_staff_text():
    if message[3] == "///END///":
        print(f"DECLARE_MESSAGE_END()\n")
    else:
        print(f"DECLARE_MESSAGE(0x{message[0]:04X}, {textbox_type[message[1]]}, {textbox_ypos[message[2]]},\n{message[3]})\n\n")
"""
