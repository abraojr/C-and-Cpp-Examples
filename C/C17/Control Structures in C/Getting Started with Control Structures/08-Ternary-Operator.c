#include <stdlib.h>
#include <stdio.h>

int main()
{
    float first_num;
    float second_num;

    printf("Please enter the first number: ");
    scanf("%f", &first_num);

    printf("Please enter the second number: ");
    scanf("%f", &second_num);

    float max_value = first_num > second_num ? first_num : second_num;

    float min_value = first_num < second_num ? first_num : second_num;

    printf("The maximum of %.2f and %.2f is: %.2f\n", first_num, second_num, max_value);
    printf("The minimum of %.2f and %.2f is: %.2f\n", first_num, second_num, min_value);

    return EXIT_SUCCESS;
}

/* OUTPUT
    Please enter the first number:
    100
    Please enter the second number:
    12
    The maximum of 100.00 and 12.00 is: 100.00
    The minimum of 100.00 and 12.00 is: 12.00
*/