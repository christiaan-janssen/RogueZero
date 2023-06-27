#include "render.h"

void renderEntity(GameData *g) {
  DrawTextureRec(
      g->texture, g->player.rect,
      (Vector2){g->player.pos.x * g->tileSize, g->player.pos.y * g->tileSize},
      WHITE);
}

void renderMap(GameData *g) {
  for (int y = 0; y < g->mapHeight; y++) {
    for (size_t x = 0; x < g->mapWidth; x++) {
      Vector2 pos = {x, y};

      DrawTextureRec(g->texture, g->gameMap->tiles[x][y].rect,
                     (Vector2){pos.x * g->tileSize, pos.y * g->tileSize},
                     WHITE);
    }
  }
}
