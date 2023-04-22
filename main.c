#include "entity.h"
#include "gameData.h"
#include "input.h"
#include "logger.h"
#include "raylib.h"
#include "render.h"
#include "save.h"

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

  SetTargetFPS(60);

  while (!WindowShouldClose()) {
    // Update
    handleInput(gameData);

    // Draw
    BeginDrawing();

    display(gameData->log);

    ClearBackground(RAYWHITE);

    renderMap(gameData);

    renderEntity(gameData);

    EndDrawing();
  }
  CloseWindow();

  saveGame(gameData);

  return 0;
}
