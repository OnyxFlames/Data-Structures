#include <stdio.h>

#include "Stack/stack.h"
#include "Queue/Queue.h"

//#define STACK_TEST
#define QUEUE_TEST

int main(void)
{
#   ifdef STACK_TEST
    Stack* stack = Stack_create(10);
    Stack_push(stack, 5);
    printf("%ld\n", Stack_peek(stack));
    Stack_destroy(stack);
#   endif
#   ifdef QUEUE_TEST
    Queue* queue = Queue_create(10);
    Queue_push(queue, 69);
    Queue_push(queue, 420);
    printf("Queue Value: %ld\n", Queue_front(queue));
    Queue_pop(queue);
    printf("Queue Value: %ld\n", Queue_front(queue));
    Queue_destroy(queue);
#   endif
    return 0;
}