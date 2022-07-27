#include <stdlib.h>
#include <stdio.h>

/*
    Function declaration and definition
*/

void hello_fn()
{
    printf("Hello - how are you?\n");
}

int main()
{
    printf("BEFORE invoking the hello_fn()\n");

    hello_fn();

    printf("AFTER invoking the hello_fn()\n");

    return EXIT_SUCCESS;
}

/* OUTPUT
    BEFORE invoking the hello_fn()
    Hello - how are you?
    AFTER invoking the hello_fn()
*/