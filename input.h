#ifndef INPUT_H_
#define INPUT_H_

#include "gameData.h"
#include "raylib.h"
#include <stdio.h>

void handleInput(GameData *g);
bool checkMove(GameData *g, Vector2 move);

#endif // INPUT_H_
