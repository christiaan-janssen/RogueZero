#ifndef LOGGER_H_
#define LOGGER_H_

#include <stdio.h>
#include <stdlib.h>
#include "include/raylib.h"

#define MAX_SIZE 9

struct item {
    char *text;
    Color color;
};

struct queue {
   struct item items[MAX_SIZE];
   int front;
   int rear;
};

typedef struct queue queue_t;

void enqueue(queue_t *q, char *text, Color color);
void dequeue(queue_t *q);
void display(queue_t *q);


#endif // LOGGER_H_
