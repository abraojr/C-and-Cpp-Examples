#include "stdio.h"

int main()
{
    char *s1 = "Pointing to a string.";
    // s1[5] = '\\'; causes error
    printf("%s\n", s1);

    char *s2[] = {"Pointing to a string."};
    s2[0] = '|';
    printf("%s\n", s2);

    char s3[50] = "Pointing to a string.";
    s3[5] = '/';
    printf("%s\n", s3);

    char c = getchar();
}

/* OUTPUT:
    Pointing to a string.
    |
    Point/ng to a string.
*/