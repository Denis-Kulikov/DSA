#include "libraries.h"
#include <stack.h>

int main ()
{
    stack numbers;
    numbers.value = 5;
    numbers.next = NULL;
    
    printf("Stack created.\n");

    return 0;
}