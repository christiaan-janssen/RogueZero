#ifndef GAMEDATA_H_
#define GAMEDATA_H_

#include "cJSON.h"
#include "constants.h"
#include "entity.h"
#include "gameMap.h"
#include "include/raylib.h"
#include "logger.h"
#include <stdlib.h>

typedef struct GameData {
  int mapWidth;
  int mapHeight;
  float tileSize;
  GameMap *gameMap;
  Entity player;
  Entity entities[10];
  Texture2D texture;
  queue_t *log;
} GameData;

struct GameData *setupGameData();

#endif // GAMEDATA_H_
