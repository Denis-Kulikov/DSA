#include <stdlib.h>

#define STACK_TYPE int // type of data

typedef struct dsa_stack
{
    STACK_TYPE value;
    struct dsa_stack *next;
} stack;

int stack_empty (stack *target);
int stack_top (stack *target, STACK_TYPE *result);
int stack_push (stack **target, STACK_TYPE push);
int stack_pop (stack **target, STACK_TYPE *pop);