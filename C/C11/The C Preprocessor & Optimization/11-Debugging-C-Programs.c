#include "stdio.h"
#include "assert.h"

int main()
{
    int x = 5;
    printf("The value of x: %i\n", x);
    x = x * 4 - 10;
    printf("The value of x after calculation: %i\n", x);

    assert(x > 0);
    assert(x < 10);

    char c = getchar();
}

/* OUTPUT:
    The value of x: 5
    The value of x after calculation: 10
    Assertion failed: x < 10 (main.c: main: 12)
*/