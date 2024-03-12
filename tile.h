#ifndef TILE_H_
#define TILE_H_

#include "include/raylib.h"
#include <stdlib.h>

typedef struct Tile {
  Vector2 pos;
  Rectangle rect;
  bool blocking;
  bool blockSight;
} Tile;

struct Tile *createTile(Vector2 pos, Rectangle rect, bool blocking,
                        bool blockSight);

#endif // TILE_H_
