#include <stdlib.h>
#include <stdio.h>

int main()
{
    int number;

    printf("Please enter a number to print out its multiplication tables (-1 to exit): ");
    scanf("%d", &number);

    goto multiplication_tables;

    printf("This code here will NOT be executed!\n");

multiplication_tables:
    for (int i = 1; i <= 10; i++)
    {
        printf("%d x %d = %d\n", number, i, number * i);
    }

    printf("Please enter another number (-1 to exit): ");
    scanf("%d", &number);

    if (number == -1)
    {
        return EXIT_SUCCESS;
    }

    goto multiplication_tables;
}

/* OUTPUT
    Please enter a number to print out its multiplication tables (-1 to exit):
    8
    8 x 1 = 8
    8 x 2 = 16
    8 x 3 = 24
    8 x 4 = 32
    8 x 5 = 40
    8 x 6 = 48
    8 x 7 = 56
    8 x 8 = 64
    8 x 9 = 72
    8 x 10 = 80
    Please enter another number (-1 to exit):
    -1
*/