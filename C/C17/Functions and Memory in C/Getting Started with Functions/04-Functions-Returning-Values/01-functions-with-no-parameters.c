#include <stdlib.h>
#include <stdio.h>

int compute_add()
{
    int result = 100 + 1000;

    return result;
}

int compute_subtract()
{
    int result = 100 - 1000;

    return result;
}

int main()
{
    int result_add = compute_add();
    printf("100 + 1000 = %d\n", result_add);

    int result_subtract = compute_subtract();
    printf("100 - 1000 = %d\n", result_subtract);

    return EXIT_SUCCESS;
}

/* OUTPUT
    100 + 1000 = 1100
    100 - 1000 = -900
*/