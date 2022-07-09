#include "stdio.h"

int main()
{
    int ia[10] = {9, 8, 7, 6, 5, 4, 3, 2, 1, 0};

    ia[0] = ia[5] + ia[7];
    ia[1] -= ia[8];
    ia[9] += 12;

    for (int i = 0; i < 10; i++)
        printf("%i %i\n", i, ia[i]);

    char c = getchar();
}

/* OUTPUT:
    0 6
    1 7
    2 7
    3 6
    4 5
    5 4
    6 3
    7 2
    8 1
    9 12
*/