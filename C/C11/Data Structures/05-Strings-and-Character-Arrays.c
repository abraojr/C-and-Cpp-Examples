#include "stdio.h"

int main()
{
    const char *s1 = "This is a constant string.";
    char *s2 = "This is a string.";
    char s3[50] = "This is a character array.";

    printf("s1: %s\n", s1);
    printf("s2: %s\n", s2);
    printf("s3: %s\n", s3);

    char c = getchar();
}

/* OUTPUT:
    s1: This is a constant string.
    s2: This is a string.
    s3: This is a character array.
*/