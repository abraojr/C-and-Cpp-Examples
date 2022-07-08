#include "stdio.h"

char *function1();

int main()
{
    printf("First Line%s", function1());
    printf("10, 10: %s\n", function1(10, 10));

    char c = getchar();
}

char *function1()
{
    return " - end of the line.\n";
}

/* OUTPUT:
    First Line - end of the line.
    10, 10:  - end of the line.
*/