#include "gameData.h"

struct GameData *setupGameData() {
  struct GameData *gameData = malloc(sizeof(*gameData));

  if (!gameData) {
    TraceLog(LOG_FATAL, "malloc failed");
  }

  gameData->tileSize = 16.0f;
  gameData->playerPos.x = 16.0f;
  gameData->playerPos.y = 16.0f;

  return gameData;
}
