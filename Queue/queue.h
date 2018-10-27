#ifndef QUEUE_H
#define QUEUE_H

#include <stdlib.h>
#include <stdbool.h>
#include <stdio.h>
typedef struct
{
    long* data;
    int queue_size;
    int queue_head;
} Queue;


Queue* Queue_create(int queue_size);

void Queue_destroy(Queue* queue);
void Queue_push(Queue* queue, long value);
long Queue_front(Queue* queue);
void Queue_pop(Queue* queue);
bool Queue_full(Queue* queue);

#endif