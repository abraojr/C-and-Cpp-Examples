#include <stdlib.h>
#include <stdio.h>
#include "arithmetic.h"

int main()
{
    float a = 100.44;
    float b = 23.87;

    printf("%.2f + %.2f = %.2f\n", a, b, add(a, b));
    printf("%.2f - %.2f = %.2f\n", a, b, subtract(a, b));
    printf("%.2f * %.2f = %.2f\n", a, b, multiply(a, b));
    printf("%.2f / %.2f = %.2f\n", a, b, divide(a, b));

    return EXIT_SUCCESS;
}

/* OUTPUT
    100.44 + 23.87 = 124.31
    100.44 - 23.87 = 76.57
    100.44 * 23.87 = 2397.50
    100.44 / 23.87 = 4.21
*/