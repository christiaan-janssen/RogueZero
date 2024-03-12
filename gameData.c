#include "gameData.h"
#include "cJSON.h"

GameData *setupGameData() {
  GameData *gameData = malloc(sizeof(*gameData));

  if (!gameData) {
    TraceLog(LOG_FATAL, "malloc failed");
  }

  FILE *fp = fopen("save.json", "r");
  if (fp != NULL) {
    fseek(fp, 0L, SEEK_END);
    int fileSize = ftell(fp);
    fseek(fp, 0L, SEEK_SET);
    char *jsonStr = (char *)malloc(fileSize + 1);
    fread(jsonStr, 1, fileSize, fp);
    fclose(fp);
    jsonStr[fileSize] = '\0';

    // Parse the JSON string into a cJSON object
    cJSON *json = cJSON_Parse(jsonStr);
    free(jsonStr);
    int x = cJSON_GetObjectItem(
                cJSON_GetObjectItem(cJSON_GetObjectItem(json, "player"), "pos"),
                "x")
                ->valueint;
    int y = cJSON_GetObjectItem(
                cJSON_GetObjectItem(cJSON_GetObjectItem(json, "player"), "pos"),
                "y")
                ->valueint;
    gameData->mapWidth = cJSON_GetObjectItem(json, "mapWidth")->valueint;
    gameData->mapHeight = cJSON_GetObjectItem(json, "mapHeight")->valueint;
    gameData->tileSize = cJSON_GetObjectItem(json, "tileSize")->valueint;

    gameData->player.pos = (Vector2){x, y};

  } else {
    gameData->player.pos = (Vector2){1.0f, 1.0f};
  }

  gameData->player.rect = (Rectangle){25 * gameData->tileSize, 0.0f,
                                      gameData->tileSize, gameData->tileSize};
  gameData->texture = LoadTexture("colored_packed.png");

  // Setup the game Map
  gameData->gameMap =
      createMap(gameData->mapWidth, gameData->mapHeight, gameData->tileSize);

  // Creatge the message queue
  gameData->log = (queue_t *)malloc(sizeof(queue_t));
  gameData->log->front = -1;
  gameData->log->rear = -1;

  return gameData;
}
