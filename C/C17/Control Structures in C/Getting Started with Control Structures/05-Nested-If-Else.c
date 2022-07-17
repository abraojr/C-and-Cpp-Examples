#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main()
{
    float first_num;
    float second_num;

    printf("Please enter the first number: ");
    scanf("%f", &first_num);

    printf("Please enter the second number: ");
    scanf("%f", &second_num);

    float response;
    printf("Please enteran estimate of the product of two numbers: ");
    scanf("%f", &response);

    float result = first_num * second_num;

    float magnitude_of_difference = fabs(response - result);

    if (magnitude_of_difference < 2)
    {
        if (magnitude_of_difference < 0.1)
        {
            printf("%f * %f = %f Yours answer is %f which is correct!\n\n", first_num, second_num, result, response);
        }
        else
        {
            printf("%f * %f = %f Yours answer is %f which is very close to correct!\n\n", first_num, second_num, result, response);
        }
    }
    else
    {
        if (magnitude_of_difference > 10)
        {
            printf("%f * %f = %f Yours answer is %f which is, unfortunately, very wrong.\n\n", first_num, second_num, result, response);
        }
        else
        {
            printf("%f * %f = %f Yours answer is %f which is, unfortunately, wrong.\n\n", first_num, second_num, result, response);
        }
    }

    return EXIT_SUCCESS;
}

/* OUTPUT
    Please enter the first number:
    10.2
    Please enter the second number:
    3
    Please enteran estimate of the product of two numbers:
    45
    10.200000 * 3.000000 = 30.599998 Yours answer is 45.000000 which is, unfortunately, very wrong.
*/