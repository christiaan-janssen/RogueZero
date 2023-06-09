#include "gameMap.h"
#include "gameData.h"
#include "raylib.h"

GameMap *createMap(int width, int height, float tileSize) {
  GameMap *gameMap = malloc(sizeof(*gameMap) + width * height * sizeof(Tile));

  Rectangle floor_rect = {0, 0, tileSize, tileSize};
  Rectangle wall_rect = {10 * tileSize, 17 * tileSize, tileSize, tileSize};

  for (size_t y = 0; y < height; y++) {
    for (int x = 0; x < width; x++) {
      Vector2 pos = {x, y};
      if (x == 0 || x == width - 1 || y == 0 || y == height - 1) {
        gameMap->tiles[coordToId(x, y, width)] =
            createTile(pos, wall_rect, true, true);
      } else {
        gameMap->tiles[coordToId(x, y, width)] =
            createTile(pos, floor_rect, false, false);
      }
    }
  }

  return gameMap;
}

int coordToId(int x, int y, float height) { return (int)x + height * y; }
