#include "stdio.h"

int main()
{
    int i1 = 5;
    int i2 = 10;
    int i3 = 25;
    i3 = (i3 + i1) * 2;
    i2 = i3 / i2;
    i1 = i2 * i1 + i3;
    printf("i1: %i, i2: %i, i3: %i\n", i1, i2, i3);

    char c = getchar();
}

/* OUTPUT:
    i1: 90, i2: 6, i3: 60
*/