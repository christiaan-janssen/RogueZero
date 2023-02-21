#include "render.h"

void renderEntity(GameData *g) {
  DrawTextureRec(g->texture, g->player.rect, g->player.pos, WHITE);
}
