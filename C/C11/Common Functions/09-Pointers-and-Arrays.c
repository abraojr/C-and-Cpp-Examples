#include "stdio.h"

int main()
{
    int ia[10][2] = {{9, 1}, {8, 2}, {7, 3}, {6, 4}, {5, 5}, {4, 6}, {3, 7}, {2, 8}, {1, 9}, {0, 0}};
    int *iap = &ia;

    printf("%i %i %i\n", ia[2][0], ia[3][0], ia[2][1]);
    printf("%i %i %i\n", *(iap + 4), *(iap + 6), *(iap + 5));

    char c = getchar();
}

/* OUTPUT:
    7 6 3
    7 6 3
*/