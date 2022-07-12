#include "stdio.h"

int main()
{
    int i1 = 123456;
    short i2 = i1;
    long long i3 = i1;
    printf("%i %hi %lli\n", i1, i2, i3);

    i3 = 9876543210;
    i2 = i3;
    i1 = i3;
    printf("%i %hi %lli\n", i1, i2, i3);
    printf("%hi\n", i1);

    char c = getchar();
}

/* OUTPUT:
    123456 -7616 123456
    1286608618 5866 9876543210
    5866
*/