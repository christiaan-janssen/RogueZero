#ifndef ENTITY_H_
#define ENTITY_H_

#include "include/raylib.h"

typedef struct Entity {
  Vector2 pos;
  Rectangle rect; // The rect to render from the tilemap
  char *name;
} Entity;

#endif // ENTITY_H_
