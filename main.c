#include "raylib.h"

int main(void) {
  const int screenWidth = 800;
  const int screenHeight = 800;

  InitWindow(screenWidth, screenHeight, "Roguelike");

  SetTargetFPS(60);

  Texture2D texture = LoadTexture("colored_packed.png");

  Vector2 pos = {16.0f, 16.0f};
  Rectangle rect = {25 * 16.0f, 0.0f, 16.0f, 16.0f};

  while (!WindowShouldClose()) {
    // Update
    if (IsKeyReleased(KEY_RIGHT)) {
      pos.x += 16;
    } else if (IsKeyReleased(KEY_LEFT)) {
      pos.x -= 16;
    } else if (IsKeyReleased(KEY_UP)) {
      pos.y -= 16;
    } else if (IsKeyReleased(KEY_DOWN)) {
      pos.y += 16;
    }

    // Draw
    BeginDrawing();

    ClearBackground(RAYWHITE);
    DrawTextureRec(texture, rect, pos, WHITE);

    EndDrawing();
  }
  CloseWindow();

  return 0;
}
