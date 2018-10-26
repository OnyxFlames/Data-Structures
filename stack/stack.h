#ifndef STACK_H
#define STACK_H

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct
{
    long* data;
    int stack_size;
    int stack_top;
} Stack;

Stack* Stack_create(int stack_size);
void Stack_destroy(Stack* stack);
void Stack_push(Stack* stack, long value);
long Stack_peek(Stack* stack);
void Stack_pop(Stack* stack);
bool Stack_full(Stack* stack);

#endif