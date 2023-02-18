#ifndef GAMEDATA_H_
#define GAMEDATA_H_

#include "raylib.h"
#include <stdlib.h>

struct GameData {
  float tileSize;
  Vector2 playerPos;
};

struct GameData *setupGameData();

#endif // GAMEDATA_H_
