#include <stdlib.h>
#include <stdio.h>

float num_1 = 10.3;
float num_2 = 20.5;

int main()
{
    printf("num_1 + num_2: %.2f\n", num_1 + num_2);
    printf("num_1 - num_2: %.2f\n", num_1 - num_2);
    printf("num_1 * num_2: %.2f\n", num_1 * num_2);
    printf("num_1 / num_2: %.2f\n", num_1 / num_2);

    return EXIT_SUCCESS;
}

/* OUTPUT
    num_1 + num_2: 30.80
    num_1 - num_2: -10.20
    num_1 * num_2: 211.15
    num_1 / num_2: 0.50
*/