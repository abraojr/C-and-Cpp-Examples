#include <stdlib.h>
#include <stdio.h>

void increment_value(float *);

int main()
{
    float first_var = 3;
    float *first_var_ptr = &first_var;

    printf("Value BEFORE function call: %.2f\n\n", first_var);

    increment_value(first_var_ptr);

    printf("Value AFTER function call: %.2f\n\n", first_var);

    return EXIT_SUCCESS;
}

void increment_value(float *float_ptr)
{
    *float_ptr += 10;

    printf("Value IN function after increment: %.2f\n\n", *float_ptr);
}

/* OUTPUT
    Value BEFORE function call: 3.00

    Value IN function after increment: 13.00

    Value AFTER function call: 13.00
*/