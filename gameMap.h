#ifndef GAMEMAP_H_
#define GAMEMAP_H_

#include "constants.h"
#include "raylib.h"
#include "tile.h"

typedef struct GameMap {
  const int width;
  const int height;
  Tile tiles[MAP_WIDTH][MAP_HEIGHT];
} GameMap;

GameMap *createMap(int width, int height, float tileSize);

#endif // GAMEMAP_H_
