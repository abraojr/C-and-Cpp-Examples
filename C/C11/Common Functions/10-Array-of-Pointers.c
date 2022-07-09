#include "stdio.h"

int main()
{
    int ia[10][2] = {{9, 1}, {8, 2}, {7, 3}, {6, 4}, {5, 5}, {4, 6}, {3, 7}, {2, 8}, {1, 9}, {0, 0}};
    int *iap[10];

    for (int i = 9; i >= 0; i--)
        iap[9 - i] = &ia[i][0];

    for (int i = 0; i < 10; i++)
        printf("%i\n", *(iap[i] + 1));

    char c = getchar();
}

/* OUTPUT:
    0
    9
    8
    7
    6
    5
    4
    3
    2
    1
*/