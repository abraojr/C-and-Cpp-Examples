#include <stdlib.h>
#include <stdio.h>

int main()
{
    if (0)
    {
        printf("The condition if (0) evaluates to true\n");
    }

    if (1)
    {
        printf("The condition if (1) evaluates to true\n");
    }

    if (5)
    {
        printf("The condition if (5) evaluates to true\n");
    }

    if (-234)
    {
        printf("The condition if (-234) evaluates to true\n");
    }

    if (101.4567)
    {
        printf("The condition if (101.4567) evaluates to true\n");
    }

    if (-1.6789)
    {
        printf("The condition if (-1.6789) evaluates to true\n");
    }

    if (0.0)
    {
        printf("The condition if (0.0) evaluates to true\n");
    }

    return EXIT_SUCCESS;
}

/* OUTPUT
    The condition if (1) evaluates to true
    The condition if (5) evaluates to true
    The condition if (-234) evaluates to true
    The condition if (101.4567) evaluates to true
    The condition if (-1.6789) evaluates to true
*/