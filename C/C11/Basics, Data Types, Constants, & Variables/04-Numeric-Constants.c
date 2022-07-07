#include "stdio.h"
#include "inttypes.h"

int main()
{
    const float f1 = 1.234E2;
    const float f2 = 5.0;
    const double d1 = -2.345e-1;
    const double d2 = 5L;
    printf("f1 %g, f2: %g, d1: %g, d2: %g\n", f1, f2, d1, d2);

    const int i1 = 013;
    const int i2 = 0x13;
    const long i3 = 13L;
    printf("i1: %i, i2: %i, i3: %" PRId64 "\n", i1, i2, i3);

    char c = getchar();
}

/* OUTPUT
    f1 123.4, f2: 5, d1: -0.2345, d2: 5
    i1: 11, i2: 19, i3: 13
*/