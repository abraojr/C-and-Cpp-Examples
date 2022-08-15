#include <stdlib.h>
#include <stdio.h>

int main()
{
    double double_var = 12345.67398593;

    printf("double_var: %lf\n", double_var);

    printf("\nExplicit type conversion performed\n\n");

    int int_result = (int)double_var + 1;

    printf("int_result: %d\n", int_result);

    return EXIT_SUCCESS;
}

/* OUTPUT
    double_var: 12345.673986

    Explicit type conversion performed

    int_result: 12346
*/