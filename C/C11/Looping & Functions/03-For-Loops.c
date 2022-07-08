#include "stdio.h"
#include "stdbool.h"

int main()
{
    for (int i = 0; i < 10; i++)
    {
        printf("%i\n", i);
    }

    for (int i = 0, j = 0; i < 10; i++, j = i * 2)
    {
        printf("%i %i\n", i, j);
    }
    char c = getchar();
}

/* OUTPUT:
    0
    1
    2
    3
    4
    5
    6
    7
    8
    9
    0 0
    1 2
    2 4
    3 6
    4 8
    5 10
    6 12
    7 14
    8 16
    9 18
*/