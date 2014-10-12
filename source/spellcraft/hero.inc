/*
* Hero "Class" for Spellcraft
*/

#define MAXHEROES 10
// Array size to fit all the players multiplied by maximum heroes they can have
#define PHMAX MAXPLAYERS * MAXHEROES

int __hero_xp[PHMAX];
int __hero_level[PHMAX];

methodmap Hero  {

  property int client {
    public get() {
      return HeroIndexToClient(this);
    }
  }
  property int slot {
    public get() {
      return HeroIndexToSlot(this);
    }
  }

  property int xp {
    public get() {
      return __hero_xp[this];
    }
    public set(int xp) {
      __hero_xp[this] = xp;
    }
  }

  property int level  {
    public get()  {
      return __hero_level[this];
    }
    public set(int level)  {
      __hero_level[this] = level;
    }
  }

  property int requireXp  {
    public get()  {
      return _getRequiredXp(this.level);
    }
  }

  public void GiveXP(int xp)  {
    this.xp += xp;
    if(this.xp > this.requireXp)  {
      // Level UP
      // TODO
    }
  }


}

int ToHeroIndex(client, slot) {
  return client * (MAXHEROES + 1) + slot;
}

int HeroIndexToClient(any index)  {
  return index / (MAXHEROES + 1);
}

int HeroIndexToSlot(any index)  {
  return index % (MAXHEROES + 1);
}


/**
 * Get required xp for the given level.
 * If hero is level 1, and you want to know get required xp to get to level 2, then call with level = 1, not 2.
 * Example: level 2 -> 3 xp needed = _getRequiredXp(2)
 */

int _getRequiredXp(level) {
  // TODO: hani? :)
}