#include <stdlib.h>
#include <stdio.h>

float num_1;
float num_2;

void enter_values()
{
    printf("Please enter a value for num_1: ");
    scanf("%f", &num_1);

    printf("Please enter a value for num_2: ");
    scanf("%f", &num_2);
}

int main()
{
    enter_values();

    printf("num_1 + num_2: %.2f\n", num_1 + num_2);
    printf("num_1 - num_2: %.2f\n", num_1 - num_2);
    printf("num_1 * num_2: %.2f\n", num_1 * num_2);
    printf("num_1 / num_2: %.2f\n", num_1 / num_2);

    return EXIT_SUCCESS;
}

/* OUTPUT
    Please enter a value for num_1:
    12.3
    Please enter a value for num_2:
    10
    num_1 + num_2: 22.30
    num_1 - num_2: 2.30
    num_1 * num_2: 123.00
    num_1 / num_2: 1.23
*/