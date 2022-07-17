#include <stdlib.h>
#include <stdio.h>

int main()
{
    int first_num;
    int second_num;

    printf("Please enter the first number:");
    scanf("%d", &first_num);

    if (first_num % 10 == 0)
    {
        printf("Please enter the second number: ");
        scanf("%d", &second_num);

        printf("Result %d + %d = %d\n\n", first_num, second_num, first_num + second_num);
    }
    else
    {
        printf("Please enter the second number: ");
        scanf("%d", &second_num);

        printf("Result %d - %d = %d\n\n", first_num, second_num, first_num - second_num);
    }

    return EXIT_SUCCESS;
}
