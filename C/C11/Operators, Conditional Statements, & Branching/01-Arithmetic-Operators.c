#include "stdio.h"

int main()
{
    int i = 1;
    int j = -i;
    printf("i: %i, j: %i\n", i, j);

    i *= j;
    j += i;
    printf("i: %i, j: %i\n", i, j);

    i = 100;
    j = i / j;
    printf("i: %i, j: %i\n", i, j);

    j *= -1;
    i = i % j;
    printf("i: %i, j: %i\n", i, j);

    char c = getchar();
}

/* OUTPUT
    i: 1, j: -1
    i: -1, j: -2
    i: 100, j: -50
    i: 0, j: 50
*/