#include "input.h"

void handleInput(GameData *g) {
  if (IsKeyReleased(KEY_RIGHT)) {
    if (checkMove(g, (Vector2){1.0f, 0.0f}))
      g->player.pos.x += 1;
  } else if (IsKeyReleased(KEY_LEFT)) {
    if (checkMove(g, (Vector2){-1.0f, 0.0f}))
      g->player.pos.x -= 1;
  } else if (IsKeyReleased(KEY_UP)) {
    if (checkMove(g, (Vector2){0.0f, -1.0f}))
      g->player.pos.y -= 1;
  } else if (IsKeyReleased(KEY_DOWN)) {
    if (checkMove(g, (Vector2){0.0f, 1.0f}))
      g->player.pos.y += 1;
  }
}

bool checkMove(GameData *g, Vector2 move) {
  float dx = move.x + g->player.pos.x;
  float dy = move.y + g->player.pos.y;
  TraceLog(LOG_DEBUG, TextFormat("dx: %f, dy: %f", dx, dy));

  if (dx >= 0 && dy >= 0 && dx < g->mapWidth && dy < g->mapHeight) {
    return true;
  }
  return false;
}
