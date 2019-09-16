# Maple Plug n' Play

Injects x86 PE images from the `plugins/` folder into MapleStory.

# Instructions

1. Build this with MSVC (requires C++17) - tested on Visual Studio 2019 only.
2. Copy MaplePNP.dll to the MapleStory directory.
3. Add MaplePNP.dll's ordinal 1 to the import address table of any DLL file that gets imported after Themida is unpacked, and before the game window opens. e.g. `ijl15.dll`

# Why not just use an injector?

The point of MaplePNP is to provide a plug-n-play setup so that game "mods" can be just provided as DLL files. You simply drag-n-drop any x86 PE DLL inside the `plugins/` directory inside the MapleStory folder and you're good to go!
