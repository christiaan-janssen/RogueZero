#include "entity.h"
#include "render.h"
#include "gameData.h"
#include "input.h"
#include "logger.h"
#include "raylib.h"

int main(void) {
  const int screenWidth = 800;
  const int screenHeight = 800;

  InitWindow(screenWidth, screenHeight, "Roguelike");

  GameData *gameData = setupGameData();
  char *text1 = "Welcome to the dungeon";
  Color color1 = LIGHTGRAY;
  enqueue(gameData->log, text1, color1);

  char *text2 = "Becarfule out there";
  Color color2 = MAROON;
  enqueue(gameData->log, text2, color2);

	for (int i = 0; i<10; i++) {
		enqueue(gameData->log, "Test log msg", LIGHTGRAY);
	}

  SetTargetFPS(60);

  while (!WindowShouldClose()) {
    // Update
    handleInput(gameData);

    // Draw
    BeginDrawing();

    display(gameData->log);

    ClearBackground(RAYWHITE);
    renderEntity(gameData);

    EndDrawing();
  }
  CloseWindow();

  return 0;
}
