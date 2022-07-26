#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main()
{
    float var_1 = 6.4;
    float ceil_var_1 = ceil(var_1);
    printf("Original: %f, ceiling: %f\n", var_1, ceil_var_1);

    float var_2 = 6.8;
    float floor_var_2 = floor(var_2);
    printf("Original: %f, floor: %f\n", var_2, floor_var_2);

    float round_var_1 = round(var_1);
    float round_var_2 = round(var_2);

    printf("Original: %f, round: %f\n", var_1, round_var_1);
    printf("Original: %f, round: %f\n", var_2, round_var_2);

    return EXIT_SUCCESS;
}

/*
    Original: 6.400000, ceiling: 7.000000
    Original: 6.800000, floor: 6.000000
    Original: 6.400000, round: 6.000000
    Original: 6.800000, round: 7.000000
*/