#include "stdio.h"

int main()
{
    int i = 1;
    int j = 2;
    int k = 2;
    int l = 3;

    if (i < j && j < i)
        printf("Always False\n");

    if (i < j || j < i)
        printf("Always True\n");

    printf("%i, %i\n", i > j ? 100 : 250, k < l ? 575 : 285);

    char c = getchar();
}

/* OUTPUT:
    Always True
    250, 575
*/