#include <stdlib.h>
#include <stdio.h>

#define MAX_SIZE 5
#define USUAL_SIZE MAX_SIZE

int main()
{
    for (int i = 0; i < USUAL_SIZE; i++)
    {
        printf("%d\n", i);
    }

    return EXIT_SUCCESS;
}

/* OUTPUT
    0
    1
    2
    3
    4
*/