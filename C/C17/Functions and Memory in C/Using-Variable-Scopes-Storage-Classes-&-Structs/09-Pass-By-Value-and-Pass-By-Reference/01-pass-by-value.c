#include <stdlib.h>
#include <stdio.h>

void increment_value(int);

int main()
{
    int first_var = 3;

    printf("Value BEFORE function call: %d\n\n", first_var);

    increment_value(first_var);

    printf("Value AFTER function call: %d\n\n", first_var);

    return EXIT_SUCCESS;
}

void increment_value(int var)
{
    var += 10;

    printf("Value IN function after increment: %d\n\n", var);
}

/* OUTPUT
    Value BEFORE function call: 3

    Value IN function after increment: 13

    Value AFTER function call: 3
*/