#include "gameMap.h"
#include "gameData.h"
#include "raylib.h"

GameMap *createMap(int width, int height, float tileSize) {
  GameMap *gameMap = malloc(sizeof(*gameMap) + width * height * sizeof(Tile));

  Rectangle rect = {0, 0, tileSize, tileSize};

  for (size_t y = 0; y < height; y++) {
    for (int x = 0; x < width; x++) {
      Vector2 pos = {x, y};
      gameMap->tiles[coordToId(x, y, width)] =
          createTile(pos, rect, false, false);
      TraceLog(LOG_INFO,
               TextFormat("ID: %i for {%i, %i}", coordToId(x, y, width), x, y));
    }
  }

  return gameMap;
}

int coordToId(int x, int y, float height) { return (int)x + height * y; }
