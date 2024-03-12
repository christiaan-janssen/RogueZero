#ifndef GAMEDATA_H_
#define GAMEDATA_H_

#include "cJSON.h"
#include "constants.h"
#include "entity.h"
#include "gameMap.h"
#include "logger.h"
#include "include/raylib.h"
#include <stdlib.h>

typedef struct GameData {
  int mapWidth;
  int mapHeight;
  float tileSize;
  struct GameMap *gameMap;
  struct Entity player;
  Texture2D texture;
  queue_t *log;
} GameData;

struct GameData *setupGameData();

#endif // GAMEDATA_H_
