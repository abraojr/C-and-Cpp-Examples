#include <stdlib.h>
#include <stdio.h>

int main()
{
    int int_var = 10;
    float float_var = 985.65;

    printf("sizeof(int_var): %lu\n", sizeof(int_var));
    printf("sizeof(float_var): %lu\n", sizeof(float_var));

    printf("\nImplicit type conversion performed\n\n");

    long long_var = int_var;
    double double_var = int_var;

    printf("sizeof(long_var): %lu\n", sizeof(long_var));
    printf("sizeof(double_var): %lu\n", sizeof(double_var));

    return EXIT_SUCCESS;
}

/* OUTPUT
    sizeof(int_var): 4
    sizeof(float_var): 4

    Implicit type conversion performed

    sizeof(long_var): 8
    sizeof(double_var): 8
*/