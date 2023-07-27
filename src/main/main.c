#include "libraries.h"
#include <stack.h>

int main ()
{
    stack * numbers = NULL;
    int value = 0;
    // numbers.value = 5;
    // numbers.next = NULL;
    
    // if (stack_push (&numbers, 1))

    printf("Is epmty: %d\n", stack_empty(numbers));

    if (stack_push (&numbers, 1) || stack_push (&numbers, 2))
        printf("Error push\n");
    else
        printf("Push: 1, 2\n");

    printf("Is epmty: %d\n", stack_empty(numbers));

    if (stack_pop (&numbers, &value))
        printf("Error pop\n");
    else
        printf("Pop: %d\n", value);

    if (stack_top(numbers, &value))
        printf("Stack top: stack is empty\n");
    else
        printf("Stack top: %d\n", value);

    return 0;
}