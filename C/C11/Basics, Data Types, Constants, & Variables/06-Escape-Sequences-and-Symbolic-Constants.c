#include "stdio.h"

int main()
{
    const char *s1 = "\"string\"";
    const char *s2 = "\r\n";
    const char c1 = '\60';
    const char c2 = '\0';
    const char c3 = '\x30';
    printf("c1: %c, c2: %c, c3: %c, s1: %s, s2: %s\n", c1, c2, c3, s1, s2);

    char c = getchar();
}

/* OUTPUT:
    c1: 0, c2: , c3: 0, s1: "string", s2:
*/