#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main()
{
    float var_1 = -15.234;
    float var_2 = 25.658;

    float abs_var_1 = fabs(var_1);
    float abs_var_2 = fabs(var_2);

    printf("Original = %f Absolute = %f\n", var_1, abs_var_1);
    printf("Original = %f Absolute = %f\n\n", var_2, abs_var_2);

    int var_3 = 5;
    int var_4 = 4;
    int var_5 = -2;

    printf("%d to the power %d is = %lf\n", var_3, var_4, pow(var_3, var_4));
    printf("%d to the power %d is = %lf\n\n", var_4, var_5, pow(var_4, var_5));

    printf("Square root of %f is = %.2f\n", abs_var_1, sqrt(abs_var_1));
    printf("Square root of %d is = %.2f\n\n", var_3, sqrt(var_3));

    if (isnan(sqrt(-10)))
    {
        printf("Negative numbers don't have real square root. \n");
    }

    return EXIT_SUCCESS;
}

/*
    Original = -15.234000 Absolute = 15.234000
    Original = 25.658001 Absolute = 25.658001
    
    5 to the power 4 is = 625.000000
    4 to the power -2 is = 0.062500

    Square root of 15.234000 is = 3.90
    Square root of 5 is = 2.24

    Negative numbers don't have real square root.
*/