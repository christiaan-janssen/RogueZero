#include "gameData.h"
#include "input.h"
#include "raylib.h"

int main(void) {
  const int screenWidth = 800;
  const int screenHeight = 800;

  InitWindow(screenWidth, screenHeight, "Roguelike");

  struct GameData *gameData = setupGameData();

  SetTargetFPS(60);

  Texture2D texture = LoadTexture("colored_packed.png");

  Rectangle rect = {25 * gameData->tileSize, 0.0f, gameData->tileSize,
                    gameData->tileSize};

  while (!WindowShouldClose()) {
    // Update
    handleInput(gameData);

    // Draw
    BeginDrawing();

    ClearBackground(RAYWHITE);
    DrawTextureRec(texture, rect, gameData->playerPos, WHITE);

    EndDrawing();
  }
  CloseWindow();

  return 0;
}
