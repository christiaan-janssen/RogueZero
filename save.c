#include "save.h"

#include "cJSON.h"
#include <stdio.h>

void saveGame(GameData *gd) {
  // Convert GameData to a cJSON object
  cJSON *json = cJSON_CreateObject();

  cJSON_AddNumberToObject(json, "mapWidth", gd->mapWidth);
  cJSON_AddNumberToObject(json, "mapHeight", gd->mapHeight);
  cJSON_AddNumberToObject(json, "tileSize", gd->tileSize);

  cJSON *player = cJSON_CreateObject();

  cJSON *playerPos = cJSON_CreateObject();
  cJSON_AddNumberToObject(playerPos, "x", gd->player.pos.x);
  cJSON_AddNumberToObject(playerPos, "y", gd->player.pos.y);
  cJSON_AddItemToObject(player, "pos", playerPos);

  cJSON *playerRect = cJSON_CreateObject();
  cJSON_AddNumberToObject(playerRect, "x", gd->player.rect.x);
  cJSON_AddNumberToObject(playerRect, "y", gd->player.rect.y);
  cJSON_AddNumberToObject(playerRect, "width", gd->player.rect.height);
  cJSON_AddNumberToObject(playerRect, "height", gd->player.rect.width);

  cJSON_AddItemToObject(player, "rect", playerRect);

  cJSON_AddItemToObject(json, "player", player);

  // Convert the cJSON object to a string
  char *jsonStr = cJSON_Print(json);

  // Save the JSON string to a file
  FILE *fp = fopen("save.json", "w");
  if (fp != NULL) {
    fputs(jsonStr, fp);
    fclose(fp);
  } else {
    printf("Failed to open file\n");
  }
  cJSON_Delete(json);
  free(jsonStr);
}

