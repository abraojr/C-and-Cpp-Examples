#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main()
{
    float num_1 = 100.245;
    float num_2 = 100.245;
    double num_3 = 100.245;
    int res;

    res = num_1 == num_2;

    printf("num_1: %f\n\n", num_1);
    printf("num_2: %f\n\n", num_2);

    printf("num_1 equal to num_2?: %d\n\n", res);

    printf("\n--------------------------------------\n\n");

    res = num_2 == num_3;

    printf("num_2: %f\n\n", num_2);
    printf("num_3: %lf\n\n", num_3);

    printf("num_2 equal to num_3?: %d\n\n", res);

    printf("\n--------------------------------------\n\n");

    // This is the correct way to check for equality between floating point numbers
    res = fabs(num_2 == num_3) < 1e-4;

    printf("num_2: %f\n\n", num_2);
    printf("num_3: %lf\n\n", num_3);

    printf("num_2 equal to num_3?: %d\n\n", res);

    return EXIT_SUCCESS;
}

/* OUTPUT
    num_1: 100.245003

    num_2: 100.245003

    num_1 equal to num_2?: 1


    --------------------------------------

    num_2: 100.245003

    num_3: 100.245000

    num_2 equal to num_3?: 0


    --------------------------------------

    num_2: 100.245003

    num_3: 100.245000

    num_2 equal to num_3?: 1
*/