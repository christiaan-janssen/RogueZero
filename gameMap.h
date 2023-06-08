#ifndef GAMEMAP_H_
#define GAMEMAP_H_

#include "gameData.h"
#include "tile.h"

typedef struct GameMap {
  const int width;
  const int height;
  Tile *tiles[];
} GameMap;

GameMap *createMap(int width, int height, float tileSize);
int coordToId(int x, int y, float height);

#endif // GAMEMAP_H_
