#include "stdio.h"

int main()
{
    char *s1 = "This is a test string.";
    char s2[50] = "This is another test string";
    char c1 = 'A';
    char c2 = '\0';
    printf("s1: %i, s2: %i, c1: %i, c2: %i\n", sizeof s1, sizeof s2, sizeof c1, sizeof c2);

    int i1 = 0;
    short i2 = 0;
    long i3 = 0;
    long long i4 = 0;
    printf("i1: %i, i2: %i, i3: %i, i4: %i\n", sizeof i1, sizeof i2, sizeof i3, sizeof i4);

    float f1 = 0;
    double d1 = 0;
    long double d2 = 0;
    printf("f1: %i, d1: %i, d2: %i\n", sizeof f1, sizeof d1, sizeof d2);

    char c = getchar();
}

/* OUTPUT:
    s1: 8, s2: 50, c1: 1, c2: 1
    i1: 4, i2: 2, i3: 8, i4: 8
    f1: 4, d1: 8, d2: 16
*/