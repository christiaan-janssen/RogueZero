#ifndef GAMEDATA_H_
#define GAMEDATA_H_

#include "entity.h"
#include "raylib.h"
#include <stdlib.h>

typedef struct GameData {
  float tileSize;
  Vector2 playerPos;
  struct Entity player;
  Texture2D texture;
} GameData;

struct GameData *setupGameData();

#endif // GAMEDATA_H_
