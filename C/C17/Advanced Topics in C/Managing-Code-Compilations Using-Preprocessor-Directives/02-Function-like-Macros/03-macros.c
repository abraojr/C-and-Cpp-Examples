#include <stdlib.h>
#include <stdio.h>

#define ADD(x, y) x + y
#define SUB(x, y) x - y

int main()
{
    int a = 10, b = 15;

    int result = 50 / ADD(a, b);
    printf("Result 50 / 10 + 15 = %d\n", result);

    result = 50 / SUB(a, b);
    printf("Result 50 / 10 + 15 = %d\n", result);

    return EXIT_SUCCESS;
}

/* OUTPUT
    Result 50 / 10 + 15 = 20
    Result 50 / 10 + 15 = -10
*/
