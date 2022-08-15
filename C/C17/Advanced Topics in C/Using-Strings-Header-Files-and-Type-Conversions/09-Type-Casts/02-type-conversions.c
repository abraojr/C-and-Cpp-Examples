#include <stdlib.h>
#include <stdio.h>

int main()
{
    double double_var = 985983.6573759;

    printf("double_var: %lf\n", double_var);

    printf("\nImplicit type conversion performed\n\n");

    float float_var = double_var;

    printf("float_var: %f\n", float_var);

    return EXIT_SUCCESS;
}

/* OUTPUT
    double_var: 985983.657376

    Implicit type conversion performed

    float_var: 985983.687500
*/