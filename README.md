spellcraft
==========

I am thrilling to let you know that our small team of wowmod developers decided to work on a different RPG-like mod for CS:GO called **SpellCraft**

## Structure of a repository

* All source code goes into `./source`.
* All server files (sound, textures, models...) go into `./server` and shall assume the root path of `gameserver/csgo`. Example: `castSpellX.wav` will go into `gameserver/csgo/sound/spellcraft/`.
* All plugin files (translations, data) go into `./data` and shall assume the root path of `gameserver/csgo/addons/sourcemod`.

## Developing
Unless there is a need, developing will happen right on the Master branch. Specific features will have their own branches, granted they take significant period of time to be developed.

