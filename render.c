#include "render.h"

void renderEntity(GameData *g) {
  DrawTextureRec(
      g->texture, g->player.rect,
      (Vector2){g->player.pos.x * g->tileSize, g->player.pos.y * g->tileSize},
      WHITE);
}

void renderMap(GameData *g) {
  for (int i = 0; i < g->mapWidth * g->mapHeight; i++) {
    DrawTextureRec(g->texture, g->gameMap->tiles[i]->rect,
                   (Vector2){g->gameMap->tiles[i]->pos.x * g->tileSize,
                             g->gameMap->tiles[i]->pos.y * g->tileSize},
                   WHITE);
  }
}
