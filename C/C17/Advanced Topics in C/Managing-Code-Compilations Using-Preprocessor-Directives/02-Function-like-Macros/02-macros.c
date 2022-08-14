#include <stdlib.h>
#include <stdio.h>

#define ADD(x, y) x + y
#define SUB(x, y) x - y

int main()
{
    int a = 10, b = 15;

    int result = ADD(a, b);
    printf("Sum = %d\n", result);

    result = SUB(a, b);
    printf("Difference = %d\n", result);

    return EXIT_SUCCESS;
}

/* OUTPUT
    Sum = 25
    Difference = -5
*/
