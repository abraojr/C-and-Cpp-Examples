#include "stdio.h"

int main()
{
    int i = 50;

    switch (i)
    {
    case 25:
        printf("25");
        break;
    case 50:
        printf("50");
        break;
    case 75:
        printf("75");
        break;
    case 100:
        printf("100");
        break;
    default:
        printf("unknown");
    }

    char c = getchar();
}

/* OUTPUT:
    50
*/