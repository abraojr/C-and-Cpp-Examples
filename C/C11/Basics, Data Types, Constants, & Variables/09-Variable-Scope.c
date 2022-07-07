#include "stdio.h"

int main()
{
    int i = 1;
    printf("Program i: %i\n", i);
    {
        i = i + 1;
        int i = 3;
        printf("Block i: %i\n", i);
    }
    printf("Function i: %i\n", funcI());
    printf("Program i: %i\n", i);

    char c = getchar();
}

int funcI()
{
    int i = 5;

    return i;
}

/* OUTPUT:
    Program i: 1
    Block i: 3
    Function i: 5
    Program i: 2
*/