#include "stdio.h"

int main()
{
    int ia[5][2] = {{9, 8}, {7, 6}, {5, 4}, {3, 2}, {1, 0}};

    for (int i = 0; i < 5; i++)
        for (int j = 0; j < 2; j++)
            printf("%i,%i %i\n", i, j, ia[i][j]);

    char c = getchar();
}

/* OUTPUT:
    0,0 9
    0,1 8
    1,0 7
    1,1 6
    2,0 5
    2,1 4
    3,0 3
    3,1 2
    4,0 1
    4,1 0
*/