#include "tile.h"

Tile *createTile(Vector2 pos, Rectangle rect, bool blocking, bool blockSight) {
  Tile *tile = malloc(sizeof(*tile));

  tile->pos = pos;
  tile->rect = rect;
  tile->blocking = blocking;
  tile->blockSight = blockSight;

  return tile;
}
