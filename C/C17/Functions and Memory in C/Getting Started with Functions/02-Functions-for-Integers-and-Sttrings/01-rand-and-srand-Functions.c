#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main()
{
    srand(time(NULL));

    for (int i = 0; i < 10; i++)
    {
        int random_num = rand();

        if (random_num % 2 == 0)
        {
            printf("The random number: %d is even\n", random_num);
        }
        else
        {
            printf("The random number: %d is odd\n", random_num);
        }
    }

    return EXIT_SUCCESS;
}

/*
    The random number: 1506366560 is even
    The random number: 1745444345 is odd
    The random number: 1800032628 is even
    The random number: 1019375569 is odd
    The random number: 1965449155 is odd
    The random number: 2071973526 is even
    The random number: 206539536 is even
    The random number: 1496732583 is odd
    The random number: 1959028477 is odd
    The random number: 826607415 is odd
*/