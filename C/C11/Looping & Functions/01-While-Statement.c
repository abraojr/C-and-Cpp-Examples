#include "stdio.h"
#include "stdbool.h"

int main()
{
    while (false)
    {
        printf("While Loop Not Entered\n");
    }

    while (true)
    {
        printf("While Loop\n");
        break;
        ;
    }

    int i = 0;
    while (i < 10)
    {
        printf("%i\n", i);
        i++;
    }

    char c = getchar();
}

/* OUTPUT:
    While Loop
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