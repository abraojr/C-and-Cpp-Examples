#include "stdio.h"
#include "stdbool.h"

int main()
{
    bool b = true;
    printf("%i, %i\n", b ? 100 : 250, !b ? 575 : 285);
    printf("%i, %i\n", !b ? 100 : 250, b ? 575 : 285);
    printf("%s\n", b ? "true" : "false");

    char c = getchar();
}

/* OUTPUT:
    100, 285
    250, 575
    true
*/