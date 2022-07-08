#include "stdio.h"
#include "stdbool.h"

int main()
{
    do
    {
        printf("Do...While Loop Now Entered\n");
    } while (false);

    do
    {
        printf("Do...While Loop\n");
        break;
    } while (true);

    int i = 0;
    do
    {
        printf("%i\n", i);
        i++;
    } while (i < 10);

    char c = getchar();
}

/* OUTPUT:
    Do...While Loop Now Entered
    Do...While Loop
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