#include "input.h"

void handleInput(struct GameData *g) {
  if (IsKeyReleased(KEY_RIGHT)) {
    g->playerPos.x += 16;
  } else if (IsKeyReleased(KEY_LEFT)) {
    g->playerPos.x -= 16;
  } else if (IsKeyReleased(KEY_UP)) {
    g->playerPos.y -= 16;
  } else if (IsKeyReleased(KEY_DOWN)) {
    g->playerPos.y += 16;
  }
}
