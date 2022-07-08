#include "stdio.h"

int main()
{
    int i = 1;
    int j = 1;
    int k = 1;
    j = i + 1, i = j + 1, k = j + 1;
    printf("i: %i, j: %i, k: %i\n", i, j, k);

    for (; i < 10; i++, j = i * 2, k = i * j)
        printf("i: %i, j: %i, k: %i\n", i, j, k);

    char c = getchar();
}

/* OUTPUT:
    i: 3, j: 2, k: 3
    i: 3, j: 2, k: 3
    i: 4, j: 8, k: 32
    i: 5, j: 10, k: 50
    i: 6, j: 12, k: 72
    i: 7, j: 14, k: 98
    i: 8, j: 16, k: 128
    i: 9, j: 18, k: 162
*/