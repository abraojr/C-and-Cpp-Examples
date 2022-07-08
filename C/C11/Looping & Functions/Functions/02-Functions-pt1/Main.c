#include "stdio.h"

int main()
{
    printf("First Line");
    function1();
    printf("Second Line");
    printf(" - Same Line");
    function1("abc");

    char c = getchar();
}

function1()
{
    printf("\n");
    return;
}

/* OUTPUT:
    First Line
    Second Line - Same Line
*/