#include "stdio.h"

int main()
{
    int ia[10] = {9, 8, 7, 6, 5, 4, 3, 2, 1, 0};

    for (int i = 0; i < 10; i++)
        printf("%i %i\n", i, ia[i]);

    for (int i = 9; i >= 0; i--)
        printf("%i %i\n", i, ia[i]);

    char c = getchar();
}

/* OUTPUT:
    0 9
    1 8
    2 7
    3 6
    4 5
    5 4
    6 3
    7 2
    8 1
    9 0
    9 0
    8 1
    7 2
    6 3
    5 4
    4 5
    3 6
    2 7
    1 8
    0 9
*/