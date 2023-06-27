#ifndef GAMEMAP_H_
#define GAMEMAP_H_

#include "gameData.h"
#include "raylib.h"
#include "tile.h"
#include "utils.h"

// TODO: Fix magic number
typedef struct GameMap {
  const int width;
  const int height;
  Tile tiles[50][35];
} GameMap;

GameMap *createMap(int width, int height, float tileSize);

#endif // GAMEMAP_H_
