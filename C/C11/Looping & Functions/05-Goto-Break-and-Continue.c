#include "stdio.h"
#include "stdbool.h"

int main()
{
    for (int i = 0; i < 10; i++)
    {
        printf("%i\n", i);
        goto EndILoop;
    }
EndILoop:;

    for (int i = 0; i < 10; i++)
    {
        printf("%i\n", i);
        break;
    }

    for (int i = 0; i < 10; i++)
    {
        printf("%i\n", i);
        continue;
        printf("Never Displayed\n");
    }

    char c = getchar();
}

/* OUTPUT:
    0
    0
    0
    1
    2
    3
    4
    5
    6
    7
    8
    9
*/