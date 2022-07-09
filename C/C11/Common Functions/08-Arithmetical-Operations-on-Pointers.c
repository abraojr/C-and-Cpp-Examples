#include "stdio.h"

int main()
{
    int ia[10] = {9, 8, 7, 6, 5, 4, 3, 2, 1, 0};
    int *iap = &ia;

    printf("%i %i %i\n", *(iap + 2), *(iap + 4), *(iap + 6));

    char c = getchar();
}

/* OUTPUT:
    7 5 3
*/