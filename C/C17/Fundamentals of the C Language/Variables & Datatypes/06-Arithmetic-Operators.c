#include <stdlib.h>
#include <stdio.h>

int main()
{
    int num_1 = 90;
    int num_2 = 5;

    int int_result;

    int_result = num_1 + num_2;
    printf("Sum: %d\n", int_result);

    int_result = num_1 - num_2;
    printf("Difference: %d\n", int_result);

    int_result = num_1 * num_2;
    printf("Product: %d\n", int_result);

    // This operation works for integers and floats
    int_result = num_1 / num_2;
    printf("Quotient: %d\n", int_result);

    // This operation is valid only for integers
    int_result = num_1 % num_2;
    printf("Remainder: %d\n", int_result);

    printf("\n---------------------------------------\n\n");

    float floating_result = 10 + 20 + 3 * 4;
    printf("Result of 10 + 20 + 3 * 4: %.2f\n\n", floating_result);

    floating_result = (10 + 20 + 3) * 4;
    printf("Result of (10 + 20 + 3) * 4: %.2f\n\n", floating_result);

    floating_result = 10 - 20 + 3 * 4 / 2;
    printf("Result of 10 - 20 + 3 * 4 / 2: %.2f\n\n", floating_result);

    floating_result = 10 - (20 + 3 * 4) / 2;
    printf("Result of 10 - ( 20 + 3 * 4 ) / 2: %.2f\n\n", floating_result);

    return EXIT_SUCCESS;
}

/* OUTPUT
    Sum: 95
    Difference: 85
    Product: 450
    Quotient: 18
    Remainder: 0

    ---------------------------------------

    Result of 10 + 20 + 3 * 4: 42.00

    Result of (10 + 20 + 3) * 4: 132.00

    Result of 10 - 20 + 3 * 4 / 2: -4.00

    Result of 10 - ( 20 + 3 * 4 ) / 2: -6.00
*/