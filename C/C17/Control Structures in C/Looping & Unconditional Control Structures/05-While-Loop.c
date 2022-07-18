#include <stdlib.h>
#include <stdio.h>

int main()
{
    int i = 0;

    while (i < 6)
    {
        printf("This is loop %d \n", i++);
    }

    printf("\nValue of i at the end of the loop %d\n", i);

    return EXIT_SUCCESS;
}

/* OUTPUT
    This is loop 0
    This is loop 1
    This is loop 2
    This is loop 3
    This is loop 4
    This is loop 5

    Value of i at the end of the loop 6
*/