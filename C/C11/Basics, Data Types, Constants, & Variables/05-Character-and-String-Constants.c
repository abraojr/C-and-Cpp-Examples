#include "stdio.h"

int main()
{
    const char *s1 = "This is a constant string";
    const char *s2 = "This is another constrant string";
    const char c1 = 'A';
    const char c2 = 48;
    printf("s1: %s, s2: %s, c1: %c, c2: %c\n", s1, s2, c1, c2);

    char c = getchar();
}

/* OUTPUT

s1: This is a constant string, s2: This is another constrant string, c1: A, c2: 0

*/