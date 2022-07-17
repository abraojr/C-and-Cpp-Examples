#include <stdlib.h>
#include <stdio.h>

int main()
{
    int num_1 = 11;
    int num_2 = 111;

    if ((num_1 > 10) && (num_2 > 10))
    {
        printf("(num_1 > 10) && (num_2 > 10) is true\n\n");
    }

    if ((num_1 > 10) || (num_2 > 10))
    {
        printf("(num_1 > 10) || (num_2 > 10) is true\n\n");
    }

    if (!(num_1 > 10))
    {
        printf("!(num_1 > 10) is true\n\n");
    }

    return EXIT_SUCCESS;
}

/* OUTPUT
    (num_1 > 10) && (num_2 > 10) is true

    (num_1 > 10) || (num_2 > 10) is true
*/