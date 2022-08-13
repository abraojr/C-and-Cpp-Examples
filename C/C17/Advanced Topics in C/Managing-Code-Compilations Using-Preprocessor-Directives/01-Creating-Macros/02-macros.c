#include <stdlib.h>
#include <stdio.h>

#define ELEMENTS 2, 4, 6, 8, 10, 12, 14

int main()
{
    int arr[] = {ELEMENTS};

    for (int i = 0; i < 7; i++)
    {
        printf("%d\n", arr[i]);
    }

    return EXIT_SUCCESS;
}

/* OUTPUT
    2
    4
    6
    8
    10
    12
    14
*/