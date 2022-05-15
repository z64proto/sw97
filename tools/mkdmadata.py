#!/usr/bin/env python3
#
#  mkdmadata.py
#  Create dmadata, dmamgr filenames and segment symbols from the spec
#

import sys

spec = ""
with open(sys.argv[1],"r") as specfile:
    spec = specfile.read()

dmadata = ""
dmamgr_files = ""
segment_symbols = ""

segments = spec.split("beginseg")[1:]
for segment in segments:
    directives = segment.split("endseg")[0].split("\n")
    # NOLOAD flagged segments have no dmadata reference as they have no rom space
    if any([directive.strip().startswith("flags") and "NOLOAD" in directive for directive in directives]):
        continue

    for directive in directives:
        directive = directive.strip()
        if directive.startswith("name"):
            name = directive.replace("name ","").replace("\"","").strip()
            dmadata += f"DMA_TABLE_ENTRY {name}\n"
            dmamgr_files += f"    \"{name}\",\n"
            segment_symbols += f"DECLARE_SEGMENTS({name})\n"

with open("build/include/dmadata.inc","w") as dmadata_file:
    dmadata_file.write(dmadata)

with open("build/include/dma_filenames.h","w") as filenames_file:
    filenames_file.write(dmamgr_files)

with open("build/include/segment_symbols.h","w") as segment_syms_file:
    segment_syms_file.write(segment_symbols)
