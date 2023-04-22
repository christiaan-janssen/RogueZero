#include "gameMap.h"
#include "gameData.h"

GameMap *createMap(float tileSize) {
  GameMap *gameMap = malloc(sizeof(*gameMap));
  for (int i = 0; i < 10; i++) {
    Vector2 pos = {i, 0};
    Rectangle rect = {0, 0, tileSize, tileSize};
    gameMap->tiles[i] = createTile(pos, rect, false, false);
  }

  return gameMap;
}
