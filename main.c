#include <stdio.h>

#include "Stack/stack.h"


//#define STACK_TEST


int main(void)
{
#   ifdef STACK_TEST
    Stack* stack = Stack_create(10);
    Stack_push(stack, 5);
    printf("%ld\n", Stack_peek(stack));
    Stack_destroy(stack);
#   endif
    return 0;
}