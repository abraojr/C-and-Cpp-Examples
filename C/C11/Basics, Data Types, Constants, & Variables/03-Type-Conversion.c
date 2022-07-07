#include "stdio.h"

int main()
{
    int i1 = 123456;
    short s1 = i1;
    int i2 = s1;
    printf("i1: %i, s1: %i, i2: %i\n", i1, s1, i2);

    double d1 = 48.34567890123456789;
    float f1 = d1;
    int i3 = d1;
    printf("d1: %3.15f, f1: %g, i3: %i\n", d1, f1, i3);

    char c1 = (char)i3;
    char c2 = (char)(i3 + 5);
    printf("c1: %c, c2: %c\n", c1, c2);

    char c = getchar(); // waits for the user to hit enter before exiting
}

/* OUTPUT
    i1: 123456, s1: -7616, i2: -7616
    d1: 48.345678901234571, f1: 48.3457, i3: 48
    c1: 0, c2: 5
*/