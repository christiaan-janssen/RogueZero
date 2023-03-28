#include "logger.h"
#include "raylib.h"

void enqueue(queue_t *q, char *text, Color color) {
	/* Add a log message to the log queue */
   if(q->rear == MAX_SIZE-1) {
	   TraceLog(LOG_ERROR, "Queue is full\n");
		 dequeue(q);
   } else {
      if(q->front == -1) {
         q->front = 0;
      }
      q->rear++;
      q->items[q->rear].text = text;
      q->items[q->rear].color = color;
   }
}

void dequeue(queue_t *q) {
   if(q->front == -1 || q->front > q->rear) {
      printf("Queue is empty\n");
   } else {
      q->front++;
   }
}

void display(queue_t *q) {
   if(q->front == -1 || q->front > q->rear) {
      printf("Queue is empty\n");
   } else {
      int i;
      for(i=q->front; i<=q->rear; i++) {
      DrawText(q->items[i].text, 10, 600+20*i, 20, q->items[i].color);
      }
   }
}
