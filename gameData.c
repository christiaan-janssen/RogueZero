#include "gameData.h"

GameData *setupGameData() {
  GameData *gameData = malloc(sizeof(*gameData));

  if (!gameData) {
    TraceLog(LOG_FATAL, "malloc failed");
  }

  gameData->mapWidth = 50;
  gameData->mapHeight = 40;
  gameData->tileSize = 16.0f;

  gameData->player.pos = (Vector2){1.0f, 1.0f};
  gameData->player.rect = (Rectangle){25 * gameData->tileSize, 0.0f,
                                      gameData->tileSize, gameData->tileSize};

  gameData->texture = LoadTexture("colored_packed.png");

  return gameData;
}
