#include "render.h"

void renderEntity(GameData *g) {
  DrawTextureRec(
      g->texture, g->player.rect,
      (Vector2){g->player.pos.x * g->tileSize, g->player.pos.y * g->tileSize},
      WHITE);
}
