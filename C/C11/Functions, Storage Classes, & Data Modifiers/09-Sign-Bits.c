#include "stdio.h"

int main()
{
    signed int i1 = 12345;
    unsigned int i2 = i1;
    printf("%i %u\n", i1, i2);

    i1 = -12345;
    i2 = i1;
    printf("%i %u\n", i1, i2);

    char c = getchar();
}

/* OUTPUT:
    12345 12345
    -12345 4294954951
*/