#include "entity.h"
#include "render.h"
#include "gameData.h"
#include "input.h"
#include "raylib.h"

int main(void) {
  const int screenWidth = 800;
  const int screenHeight = 800;

  InitWindow(screenWidth, screenHeight, "Roguelike");

  GameData *gameData = setupGameData();

  SetTargetFPS(60);

  while (!WindowShouldClose()) {
    // Update
    handleInput(gameData);

    // Draw
    BeginDrawing();

    ClearBackground(RAYWHITE);
	renderEntity(gameData);

    EndDrawing();
  }
  CloseWindow();

  return 0;
}
