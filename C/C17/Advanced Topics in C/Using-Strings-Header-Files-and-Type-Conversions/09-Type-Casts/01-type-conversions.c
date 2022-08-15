#include <stdlib.h>
#include <stdio.h>

int main()
{
    float float_var = 985.65;

    printf("float_var: %f\n", float_var);

    printf("\nImplicit type conversion performed\n\n");

    int int_var = float_var;

    printf("int_var: %d\n", int_var);

    return EXIT_SUCCESS;
}

/* OUTPUT
    float_var: 985.650024

    Implicit type conversion performed

    int_var: 985
*/