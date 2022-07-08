#include "stdio.h"
#include "stdbool.h"

int main()
{
    int i = 5 * 10 + 15 * 20;
    bool b1 = 0xf & 0xa == 0xf ^ 0xa;
    bool b2 = (0xf & 0xa) == (0xf ^ 0xa);

    printf("i: %i, b1: %i, b2: %i\n", i, b1, b2);

    char c = getchar();
}

/* OUTPUT:
    i: 350, b1: 1, b2: 0
*/