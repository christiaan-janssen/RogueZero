#ifndef GAMEDATA_H_
#define GAMEDATA_H_

#include "entity.h"
#include "raylib.h"
#include <stdlib.h>

typedef struct GameData {
  int mapWidth;
  int mapHeight;
  float tileSize;
  struct Entity player;
  Texture2D texture;
} GameData;

struct GameData *setupGameData();

#endif // GAMEDATA_H_
