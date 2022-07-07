#include "stdio.h"

int main()
{
    int i = 1;
    int j = 2;
    int k = 2;
    int l = 3;

    if (i < j)
        printf("%i < %i\n", i, j);

    if (j <= k)
        printf("%i <= %i\n", j, k);

    if (j >= k)
        printf("%i >= %i\n", j, k);

    if (l > i)
        printf("%i > %i\n", l, i);

    if (i != j)
        printf("%i != %i\n", i, j);

    if (j == k)
        printf("%i == %i\n", j, k);

    char c = getchar();
}

/* OUTPUT
    1 < 2
    2 <= 2
    2 >= 2
    3 > 1
    1 != 2
    2 == 2
*/