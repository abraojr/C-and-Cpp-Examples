#include "stdio.h"

int main()
{
    enum e1
    {
        VALUE0,
        VALUE1,
        VALUE2
    };
    printf("e1.0: %i, e1.1: %i, e1.2: %i\n", VALUE0, VALUE1, VALUE2);

    enum e2
    {
        VALUE100 = 100,
        VALUE101,
        VALUE102
    };
    printf("e2.0: %i, e2.1: %i, e2.2: %i\n", VALUE100, VALUE101, VALUE102);

    char c = getchar();
}

/* OUTPUT:
    e1.0: 0, e1.1: 1, e1.2: 2
    e2.0: 100, e2.1: 101, e2.2: 102
*/