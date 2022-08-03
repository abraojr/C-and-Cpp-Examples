#include <stdlib.h>
#include <stdio.h>

int main()
{
    register int counter;

    for (counter = 0; counter < 5; counter++)
    {
        printf("counter: %d\n", counter);
    }

    return EXIT_SUCCESS;
}

/* OUTPUT
    counter: 0
    counter: 1
    counter: 2
    counter: 3
    counter: 4
*/