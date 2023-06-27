#include "gameMap.h"
#include "tile.h"

GameMap *createMap(int width, int height, float tileSize) {
  GameMap *gameMap = malloc(sizeof(*gameMap) + width * height * sizeof(Tile));

  Rectangle floor_rect = {0, 0, tileSize, tileSize};

  for (size_t y = 0; y < height; y++) {
    for (size_t x = 0; x < width; x++) {
      Vector2 pos = {x, y};
      gameMap->tiles[x][y] = *createTile(pos, floor_rect, false, false);
    }
  }

  return gameMap;
}
