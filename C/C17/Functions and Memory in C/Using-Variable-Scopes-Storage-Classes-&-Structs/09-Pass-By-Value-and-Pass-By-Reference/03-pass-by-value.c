#include <stdlib.h>
#include <stdio.h>

void increment_value(char);

int main()
{
    char first_var = 'A';

    printf("Value BEFORE function call: %c\n\n", first_var);

    increment_value(first_var);

    printf("Value AFTER function call: %c\n\n", first_var);

    return EXIT_SUCCESS;
}

void increment_value(char var)
{
    var += 10.0;

    printf("Value IN function after increment: %c\n\n", var);
}

/* OUTPUT
    Value BEFORE function call: A

    Value IN function after increment: K

    Value AFTER function call: A
*/