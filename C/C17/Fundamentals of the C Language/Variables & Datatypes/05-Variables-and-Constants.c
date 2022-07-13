#include <stdlib.h>
#include <stdio.h>

int main()
{
    long l1 = 0100000;
    long l2 = 0x67000;

    printf("l1: %ld \n", l1);
    printf("l2: %ld \n", l2);

    printf("\n------------------------------------\n\n");

    float f1 = 97456.340000;
    float f2 = 45678.230000;
    float f3 = -100.7;
    float f4 = 1.24e5;
    float f5 = 4.5e4;
    float f6 = -10.5E-2;

    printf("f1: %f \n", f1);
    printf("f2: %f \n", f2);
    printf("f3: %f \n", f3);
    printf("f4: %f \n", f4);
    printf("f5: %f \n", f5);
    printf("f6: %f \n", f6);

    printf("\n------------------------------------\n\n");

    char c1 = 'Q';
    char c2 = '\n';
    char c3 = 66;

    printf("c1: %c \n", c1);
    printf("c2: %c \n", c2);
    printf("c3: %c \n", c3);

    printf("\n------------------------------------\n\n");

    const float const_f1 = 101000.23;
    const float const_f2 = 67500.76;

    printf("const_f1: %f \n", const_f1);
    printf("const_f2: %f \n", const_f2);

    printf("\n------------------------------------\n\n");

    return EXIT_SUCCESS;
}

/* OUTPUT
    l1: 32768
    l2: 421888

    ------------------------------------

    f1: 97456.343750
    f2: 45678.230469
    f3: -100.699997
    f4: 124000.000000
    f5: 45000.000000
    f6: -0.105000

    ------------------------------------

    c1: Q
    c2:

    c3: B

    ------------------------------------

    const_f1: 101000.226562
    const_f2: 67500.757812

    ------------------------------------
*/