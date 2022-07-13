#include "stdio.h"

int main()
{
    int ia[4][3][2] = {{{9, 8}, {7, 6}, {5, 4}},
                       {{3, 2}, {1, 0}, {-1, -2}},
                       {{-1, 0}, {1, 2}, {3, 4}},
                       {{5, 6}, {7, 8}, {9, 10}}};

    for (int i = 0; i < 4; i++)
        for (int j = 0; j < 3; j++)
            for (int k = 0; k < 2; k++)
                printf("%i,%i,%i %i\n", i, j, k, ia[i][j][k]);

    char c = getchar();
}

/* OUTPUT:
    0,0,0 9
    0,0,1 8
    0,1,0 7
    0,1,1 6
    0,2,0 5
    0,2,1 4
    1,0,0 3
    1,0,1 2
    1,1,0 1
    1,1,1 0
    1,2,0 -1
    1,2,1 -2
    2,0,0 -1
    2,0,1 0
    2,1,0 1
    2,1,1 2
    2,2,0 3
    2,2,1 4
    3,0,0 5
    3,0,1 6
    3,1,0 7
    3,1,1 8
    3,2,0 9
    3,2,1 10
*/