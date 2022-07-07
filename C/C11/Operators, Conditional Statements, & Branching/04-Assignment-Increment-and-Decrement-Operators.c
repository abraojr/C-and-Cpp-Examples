#include "stdio.h"

int main()
{
    int i = 1;
    int j = 2;

    printf("i: %i, j: %i\n", i++, ++j);
    printf("i: %i, j: %i\n", i--, --j);
    i++;
    j++;
    printf("i: %i, j: %i\n", i, j);
    printf("i: %i, j: %i\n", i = i * j, j = i * j);

    char c = getchar();
}

/* OUTPUT:
    i: 1, j: 3
    i: 2, j: 2
    i: 2, j: 3
    i: 12, j: 6
*/