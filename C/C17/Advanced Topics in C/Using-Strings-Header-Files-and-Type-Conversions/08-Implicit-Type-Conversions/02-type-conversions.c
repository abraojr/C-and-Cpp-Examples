#include <stdlib.h>
#include <stdio.h>

int main()
{
    short short_var = 25;
    int int_var = 10;
    float float_var = 985.65;

    printf("sizeof(short_var): %lu\n", sizeof(short_var));
    printf("sizeof(int_var): %lu\n", sizeof(int_var));
    printf("sizeof(float_var): %lu\n", sizeof(float_var));

    printf("\nImplicit type conversion performed\n\n");

    double double_result = short_var * int_var + float_var;

    printf("sizeof(double_result): %lu\n", sizeof(double_result));
    printf("double_result: %.2lf\n", double_result);

    return EXIT_SUCCESS;
}

/* OUTPUT
    sizeof(short_var): 2
    sizeof(int_var): 4
    sizeof(float_var): 4

    Implicit type conversion performed

    sizeof(double_result): 8
    double_result: 1235.65
*/