#include <stdlib.h>
#include <stdio.h>

void increment_value(float);

int main()
{
    float first_var = 3.0;

    printf("Value BEFORE function call: %.2f\n\n", first_var);

    increment_value(first_var);

    printf("Value AFTER function call: %.2f\n\n", first_var);

    return EXIT_SUCCESS;
}

void increment_value(float var)
{
    var += 10.0;

    printf("Value IN function after increment: %.2f\n\n", var);
}

/* OUTPUT
    Value BEFORE function call: 3.00

    Value IN function after increment: 13.00

    Value AFTER function call: 3.00
*/