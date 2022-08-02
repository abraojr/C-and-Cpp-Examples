#include <stdlib.h>
#include <stdio.h>

float num_1 = 10.3;
float num_2 = 20.5;

int main()
{
    printf("Global variable num_1: %.2f\n", num_1);
    printf("Global variable num_2: %.2f\n", num_2);

    int num_1 = 100;
    int num_2 = 200;

    printf("Redefined variable num_1: %d\n", num_1);
    printf("Redefined variable num_2: %d\n", num_2);

    return EXIT_SUCCESS;
}

/* OUTPUT
    Global variable num_1: 10.30
    Global variable num_2: 20.50
    Redefined variable num_1: 100
    Redefined variable num_2: 200
*/