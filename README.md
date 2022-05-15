# Zelda Spaceworld ‘97 Experience
![](https://github.com/z64proto/sw97/blob/master/images/boxart.png?raw=true)

## We have released a new version of the project! (See changes [here](https://github.com/z64proto/sw97/blob/master/CHANGELOG.md))

This project aims to be a *mostly* accurate representation of the *Nintendo Spaceworld 1997* demo of *The Legend of Zelda: Ocarina of Time*. Since this project aims to restore an experience that was originally a demo, it cannot be completed from start-to-finish like the final game. Instead, three gameplay “tours” featured in the original Spaceworld 1997 demo are available to choose from, each showcasing various unique flavors of gameplay.

**Since much of the code in this project either had to be adapted for use here or is fully custom, please give credit when reusing code from this repo.**

## Patching a ROM
This is the suggested way for most users to experience the project.

1. First get your legally-obtained ROM of *The Legend of Zelda: Ocarina of Time* (version 1.0 NTSC-U) ready, and download the [patch](https://mega.nz/file/umBwBYYC#udpenowzC6LWoHdUM1WJPI8p1D2pFczhXBXZb_PTR6A).
2. Open the patcher tool [here](https://www.marcrobledo.com/RomPatcher.js/).
3. Load your ROM into the patcher where it says "ROM File."
4. Load the included `.bps` file where it says "Patch file."
Note: If your rom ends with the `.z64` extension, use the `.bps` labeled "Big Endian." If your rom ends with `.n64`, use the "Byteswapped" patch.
5. If the patcher does not report any issues, click "Apply Patch" and the newly patched ROM will be downloaded.
6. Now play the game on your platform of choice, whether it be a real Nintendo 64 with a flashcart, or on an emulator!

### Help it won't work!
* If you have tried both the byteswapped and big endian patches and the patcher says that the checksum is incorrect, try downloading [Tool64](https://www.zophar.net/utilities/n64aud/tool-n64.html) and converting the ROM to big endian, and using the big endian patch.
* If you are still having trouble, your ROM may simply not be the correct version of Ocarina of Time. Please ensure that your ROM is version 1.0, NTSC-U of the game.
* Verify that the checksum of your ROM is correct. For the big endian ROM it should be `5bd1fe107bf8106b2ab6650abecd54d6`, and for byteswapped it should be `6697768a7a7df2dd27a692a2638ea90b`.

## Compiling from scratch
Some users may want to compile the project from source code. What follows are instructions for doing so.

This project is intended to be compiled on either native Linux, or Windows Subsystem for Linux (WSL) using a distribution such as Ubuntu.

Clone the repo directly, or fork and clone this repository to your local machine via
```bash
git clone <url-to-your-fork.git>
```
Install the necessary build dependencies with
```bash
sudo apt-get update
sudo apt-get install git build-essential binutils-mips-linux-gnu python3
```

Add your legally-obtained Master Quest PAL GCN Debug ROM into the root folder, and name it `baserom_original.z64`.

`cd` into the directory of the newly cloned fork and run the following:
```bash
make setup -j
make -j
```

If the rom compiled successfully, `sw97.z64` will be written to the root directory.

Building a wad file for use with the Wii Virtual Console is also supported. Add an original USA wad into the root folder, named `basewad.wad` and run:
```bash
make vc -j
```

## Where Assets Originated From
In early 2021, a 32 MB development cartridge of *F-Zero X* was discovered and dumped by [Forest of Illusion](https://illusion.64history.net/), a well known video game preservationist. F-Zero X is only a 16 MB game, so half of that 32 MB development cartridge should have went unused. As it would turn out, however, *something* was taking up the extra cartridge space at the end. Upon further inspection, exactly half of a 32 MB Ocarina of Time prototype dating back to 1997 was discovered. It is likely that this cartridge originally held the Ocarina of Time demo showcased at Spaceworld 1997, but the first half was overwritten by F-Zero X afterward when the development cartridge was reused. This extra data, now dubbed the "overdump," provided the basis for this project's conception.

Additionally, the "Gigaleak" that occured in mid-2020 provided both a significant amount of insight and assets that were used within this project.

Areas, dialogue, and most textures come from the F-Zero X overdump. The dialogue was translated from Japanese by GlitterBerri and has been formatted so it will fit within text boxes when using the English font. This translation attempts to be as faithful to the original dialogue as possible.

## Innaccuracies

As mentioned prior, this recreation is only *mostly* accurate. There are some exceptions to our goal to accurately represent the original Spaceworld 1997 demo. In the interest of transparency and accurate preservation, we have included an extensive write-up of anything within the project that we cannot confirm to be entirely accurate.

One major exception that you will find is the *Zelda Map Select* mode. In this mode, you can explore maps found in the overdump that weren’t accessible in the actual Spaceworld 1997 demo. Although these areas were not intended to be explored within the demo experience, we wanted to give people an easy way to explore them just for fun. When in a map accessed from map select, press and hold L, then R, and then Z together to return to the map select. In this mode you will also be given a full inventory, so be sure to try some of the restored cut items and spells!

Since no code whatsoever was present within the overdump, all restored features had to be based on old gameplay footage, screenshots, reports by the press, unused Gigaleak code, and/or leftover (but unused) code from the final game. For example, the Title Screen being a part of File Select was found in unused code from the Gigaleak, but required modification to be usable for this project. Assets such as actor models were restored similarly, with some being based on those found in the Gigaleak.

Covered below is most of what was recreated and restored without overdump assets and without direct porting from the Gigaleak. If you’re curious about something that’s not included in the list or you have questions in general, feel free to ask the team on the official community Discord.

## Recreated or Restored Content

### Characters recreated:
* Young Link
* Adult Link
* Ganondorf (partially based on an older model from the Gigaleak)
* Impa (uses old head model leftover in the final game)
* Child Zelda
* Zelda’s horse

### Objects recreated:
* Signposts (the *Super Mario 64* sign is a pure guess, though)
* Trees & other overworld objects (“field_keep”, speculative, see below)
* Bombable rocks ("Bombiwas")
* Landmines
* Bomb item
* Bomb bag shown on Link’s waist when using bombs
* Ocarina
* Hookshot pillars
* Dodongo’s Cavern giant Dodongo jaw
* Bombable walls
* Deku Tree and Dodongo’s Cavern dungeon doors
* Deku Tree falling bridge (speculative, see below)
* Deku Tree double door used before Queen Gohma's lair
* Rising dungeon platforms
* Push blocks

### Player animations recreated:
* Walking sword slashes
* Turn around
* Play Reed Whistle
* Play Ocarina
* Backflip
* Spin Attack charge
* Get item (holding item above head)

### All of the pre-renders that were missing in the overdump or iQue were recreated from scratch or heavily altered. These include:
* Hyrule Castle Town (heavily altered from final, includes some recreated parts made by team members)
* Hyrule Castle Garden (made from scratch based on map collision from overdump)
* Kokiri shop panoramic view (made from scratch, overhead view is from overdump)
* Parts of the Kokiri house and Link’s house pre-renders that were missing from the overdump (heavily altered from final)
* The Temple of Time exterior prerender from the Gigaleak was slightly altered to match pre-Spaceworld footage that shows it using the same brick path texture seen outside in the overdump’s Market item shop prerender.

### Several actors that were removed had to be written from scratch. These include:
* En_B_Obj (“dangeon_keep”/dungeon actors)
* En_D_Obj (“field_keep”/overworld actors)
* En_Npc (various NPCs actor)
* En_oE2 (Kokiri and Goron NPC actor)
* En_Zakohai (soldier NPC actor)
* En_Magic_Fire (Fire Spell actor)
* En_Magic_Ice (Ice Spell actor)
* En_Magic_Dark (Shadow Spell actor)
* En_Magic_Soul (Spirit Spell actor)
* En_Magic_Light (Light Spell actor)
* Other actors were heavily adjusted based on either behavior differences discovered in footage, unused code, Gigaleak code, or speculation based on source commit logs or press reports.

### Interface changes:
* The pause subscreen has been modified based on Gigaleak code, footage, and implements textures from the overdump.
* Minimap display behavior is based on screens, footage, and implements textures from the overdump. Also, the exact colors that the overworld and dungeon minimaps used were discovered in the Gigaleak.
* The main text font has been changed to match the text shown both in old screens and in overdump textures.
* Much of the old textbox behavior has been restored based on screens, footage, and Gigaleak code. It also implements textures from the overdump.
* The Rupee counter font has been remade based on old screenshots and footage.
* The Action Button font is in English for ease of readability, but in the actual demo it was in Japanese; some non-final action textures from the overdump have been translated and programmed in to be used.
* The Title Screen has been included into File Select based on unused Gigaleak code, and its appearance and behavior has been changed based on both unused Gigaleak code and the old Ocarina of Time logo shown at Spaceworld ‘97.
* File Select behavior has been changed based on both Gigaleak code and a screenshot from Spaceworld 1997 showing a partially-obscured File Select screen set at evening.
* The “tours” in File Select are based on reports by the press describing them, and the look & layout of their labels in file select are based on screenshots of a similar demo menu from E3 1998.

### Misc changes:
* Changes were made to Link’s handling/behavior and enemy behavior based on footage and screenshots from around the time.
* Hat physics were added based on non-hat physics code from Majora’s Mask, although it is unknown how similar this code is to their actual hat physics code from that time.
* Infinite ammo was given based on early footage showing ammo never decreasing
* Some unused/leftover SFX from within the final game have been reimplemented to match early footage, but not all early SFX could be restored
* Many of the camera settings for maps were adjusted to match footage & screenshots.
* Actor placements within maps are untouched from the overdump. However, the “field_keep”/generic overworld actor and the “dangeon_keep”/generic dungeon actor both used many unknown settings. These settings would tell the actors what visuals to display and what behavior to have. Some of these settings were figured out by looking at footage and screenshots. Other settings were too difficult to figure out and had to be based purely on speculation. For example, the “field_keep” actor’s usage in the Lost Woods and Sacred Forest Meadow was heavily guessed. While it’s likely many of the settings used in those maps turned the actor into trees, shrubbery, and fallen logs, it’s not known exactly which settings would correspond to which of those things. As such, it’s possible that these maps had very different appearances from what we have in this recreation. A fair amount of guessing was also done for the “dangeon_keep” actor’s settings in Dodongo’s Cavern, most notably the rolling boulders, flamethrower traps, push blocks, and rising platform. If a “field_keep” setting couldn’t be guessed, it appears as a green cube in the game; unknown “dangeon_keep” settings similarly appear as blue cubes.
* The end-of-dungeon progession was guessed for the both Inside the Deku Tree and Dodongo’s Cavern. We made the bridge in the Deku Tree fall downward to create a path to Gohma, and in Dodongo’s Cavern the giant Dodongo statue’s jaw was modified so it could be opened by throwing a bomb into its mouth. It’s entirely possible that the dungeon tours weren’t actually completable in the original Spaceworld 1997 demo, as players had limited time to play the demo and the developers may have anticipated no one would reach the end of dungeons in time, and thus didn't account for it.
* Two additional spawn points were added to the Forest Temple to enter areas which were inaccessible in the original overdump version of the map due to missing doors or missing connector rooms. These can be accesed via the Zelda Map Select.
* “Spot04_OLD” from the Gigaleak was added as a bonus map. Note that this map was **NOT** included within the overdump, and is strictly a bonus. However, some messages from the overdump still reference this older version of Kokiri Forest, which made it much easier to infer which actors would have been included in this map.
* Rooms in Fstdan/Ganon’s Tower switch between loading both the older and newer Stalfos assets/“object” files, but always load the same Stalfos actor. It is not entirely clear how this would have worked, but rooms that attempt to load the older object may have simply crashed.

## Credits

### Main Programming
* Zel
* Fig
* MrCheeze

### Additional Programming
* Tharo
* louist103
* Aegiker
* CDi-Fails
* Rankaisija
* MelonSpeedruns
* ZeeRoX

### Assets
* ZeeRoX
* Zel
* Porcino
* CDi-Fails
* Lurondor

### Research & Planning
* Xiartic
* Porcino
* CDi-Fails
* GlitterBerri
* ZeeRoX

### Translation
* GlitterBerri

### Debugging
* Xiartic
* Fig
* ZeeRoX
* Zel

### Bugtesters
* Zeth Ryder
* Dark Linkaël
* Syeo
* xShawnxP
* MutantAura
* FantaTanked
* Timato
* AverageGreg
* PaintSkate8
* Phlori
* xwillmarktheplace
* Link11
* jfm
* Noface
* CountLG

### Special Thanks
* xDaniel
* z64me
* Steven Tyler Sean Herr
* Forest of Illusion
* CloudModding

### Tools
* Fast64
* OoT Decomp (Including ZAPD with added features from Kenix & Jack Walker)
* Link IK rig from Sauraen and Rankaisija
