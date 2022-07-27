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

void perform_arithmetic_operations()
{
    printf("num_1 + num_2: %.2f\n", num_1 + num_2);
    printf("num_1 - num_2: %.2f\n", num_1 - num_2);
    printf("num_1 * num_2: %.2f\n", num_1 * num_2);
    printf("num_1 / num_2: %.2f\n", num_1 / num_2);
}

int main()
{
    enter_values();
    perform_arithmetic_operations();

    printf("num_1 still accessible in main(): %.2f\n", num_1);
    printf("num_2 still accessible in main(): %.2f\n", num_2);

    return EXIT_SUCCESS;
}

/* OUTPUT
    Please enter a value for num_1:
    12.75
    Please enter a value for num_2:
    3.5
    num_1 + num_2: 16.25
    num_1 - num_2: 9.25
    num_1 * num_2: 44.62
    num_1 / num_2: 3.64
    num_1 still accessible in main(): 12.75
    num_2 still accessible in main(): 3.50
*/