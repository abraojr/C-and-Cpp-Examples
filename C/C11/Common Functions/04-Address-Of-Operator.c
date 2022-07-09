#include "stdio.h"

int main()
{
    int i1 = 12345;
    int *i2 = &i1;
    printf("%i %i %i\n", i1, i2, *i2);

    char c = getchar();
}

/* OUTPUT:
    12345 2032520140 12345
*/