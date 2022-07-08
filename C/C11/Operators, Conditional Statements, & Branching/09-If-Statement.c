#include "stdio.h"

int main()
{
    int i = 50;

    if (i > 100)
        printf("i > 100\n");

    if (i < 50)
        printf("i < 50\n");

    if (i == 50)
    {
        printf("i == 50\n");
        i += 25;
    }

    char c = getchar();
}

/* OUTPUT:
    i == 50
*/