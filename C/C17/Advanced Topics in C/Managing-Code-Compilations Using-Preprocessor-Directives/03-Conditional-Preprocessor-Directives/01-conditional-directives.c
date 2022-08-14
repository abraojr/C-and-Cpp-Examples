#include <stdlib.h>
#include <stdio.h>

#define DEBUG 2

float perform_complex_computation(float a, float b, float c, float d)
{
    float result_1 = a + b * b;
    float result_2 = c - 5 * d;

    float result_3 = result_1 / result_2;

#if DEBUG == 1
    printf("result_1: %.2f\n", result_1);
    printf("result_2: %.2f\n", result_2);
    printf("result_3: %.2f\n", result_3);
#elif DEBUG == 2
    printf("result_3: %.2f\n", result_3);
#endif

    return result_3 * result_3;
}

int main()
{
    float a = 5.6, b = 11.2, c = 23.4, d = 3.7;

    printf("Complex computation result: %.2f\n", perform_complex_computation(a, b, c, d));

    return EXIT_SUCCESS;
}

/*
    **DEBUG 0  PRINT**
    Complex computation result: 715.18

    **DEBUG 1  PRINT**
    result_1: 131.04
    result_2: 4.90
    result_3: 26.74
    Complex computation result: 715.18

    **DEBUG 2  PRINT**
    result_3: 26.74
    Complex computation result: 715.18
*/