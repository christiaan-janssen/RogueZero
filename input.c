#include "input.h"

void handleInput(GameData *g) {
  if (IsKeyReleased(KEY_RIGHT)) {
    if (checkMove(g, (Vector2){1.0f, 0.0f}))
      g->player.pos.x += 1.0f;
  } else if (IsKeyReleased(KEY_LEFT)) {
    if (checkMove(g, (Vector2){-1.0f, 0.0f}))
      g->player.pos.x -= 1.0f;
  } else if (IsKeyReleased(KEY_UP)) {
    if (checkMove(g, (Vector2){0.0f, -1.0f}))
      g->player.pos.y -= 1.0f;
  } else if (IsKeyReleased(KEY_DOWN)) {
    if (checkMove(g, (Vector2){0.0f, 1.0f}))
      g->player.pos.y += 1.0f;
  }
}

bool checkMove(GameData *g, Vector2 move) {
  int dx = move.x + g->player.pos.x;
  int dy = move.y + g->player.pos.y;

  if (g->gameMap->tiles[dx][dy].blocking) {
    return false;
  }

  return true;
}
