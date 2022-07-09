#include "stdio.h"

int main()
{
    int i1 = 12345;
    int *i2 = &i1;
    int **i3 = &i2;
    printf("%i %i %i\n", i1, *i2, **i3);

    char c = getchar();
}

/* OUTPUT:
    12345 12345 12345
*/