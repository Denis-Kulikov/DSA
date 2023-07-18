#define STACK_TYPE int // type of data

typedef struct dsa_stack
{
    STACK_TYPE value;
    struct dsa_stack *next;
} stack;
