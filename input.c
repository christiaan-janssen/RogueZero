#include "input.h"

void handleInput(GameData *g) {
  if (IsKeyReleased(KEY_RIGHT)) {
    g->player.pos.x += 1;
  } else if (IsKeyReleased(KEY_LEFT)) {
    g->player.pos.x -= 1;
  } else if (IsKeyReleased(KEY_UP)) {
    g->player.pos.y -= 1;
  } else if (IsKeyReleased(KEY_DOWN)) {
    g->player.pos.y += 1;
  }
}
