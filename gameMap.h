#ifndef GAMEMAP_H_
#define GAMEMAP_H_

#include "gameData.h"
#include "tile.h"

typedef struct GameMap {
  Tile *tiles[10];
} GameMap;

GameMap *createMap(float tileSize);

#endif // GAMEMAP_H_
