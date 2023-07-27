#include "stack.h"

int stack_empty (stack *target)
{
    return target == NULL;
}

int stack_top (stack *target, STACK_TYPE *result)
{
    if (target == NULL)
        return 1;

    *result = target->value;

    return 0;
}



int stack_push (stack **target, STACK_TYPE push)
{
    stack *node;
    if (target == NULL)
        return 1;
    
    // (*target)->next = malloc(sizeof(stack));
    // if ((*target)->next == NULL)
    //     return 1;

    // (*target)->next->next = NULL;
    // (*target)->next->value = push;

    // *target = (*target)->next;

    node = malloc(sizeof(stack));
    if (node == NULL)
        return 1;

    node->next = *target;
    node->value = push;

    // node = (*target)->next;
    *target = node;

    return 0;
}

int stack_pop (stack **target, STACK_TYPE *pop)
{
    if (target == NULL || *target == NULL)
        return 1;
    
    *pop = (*target)->value;
    free(*target);

    *target = (*target)->next != NULL ? (*target)->next : NULL;

    // if ((*target)->next != NULL)
    // {
    //     *target = (*target)->next;
    // } else
    // {

    // }

    return 0;
}
