#include "Stack.h"

Stack* Stack_create(int stack_size)
{
    Stack* stack = (Stack*)malloc(sizeof(Stack));
    if (stack == NULL)
        return NULL;
    stack->data = malloc(sizeof(long) * stack_size);
    if (stack->data == NULL)
    {
        printf("Failed to allocate data for stack\n");
        free(stack);
        return NULL;
    }
    stack->stack_size = stack_size;
    stack->stack_top = 0;
    return stack;
}

void Stack_destroy(Stack* stack)
{
    if (stack == NULL)
        return;
    else
    {
        printf("Destroying stack\n");
        free(stack->data);
        printf("Freed stack data.\n");
        free(stack);
        printf("Stack freed\n");
    }
}

void Stack_push(Stack* stack, long value)
{
    stack->data[stack->stack_top++] = value;  
}

long Stack_peek(Stack* stack)
{
    if (stack->stack_top > 0)
        return stack->data[stack->stack_top - 1];
    else
        return -1;
}

void Stack_pop(Stack* stack)
{
    --stack->stack_top;
}

bool Stack_full(Stack* stack)
{
    return stack->stack_top == stack->stack_size;
}