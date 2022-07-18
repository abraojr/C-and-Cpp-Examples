#include <stdlib.h>
#include <stdio.h>

int main()
{
    int a = 8;
    int b = 3;

    do
    {
        printf("a: %d, b: %d\n", a, b);
        a = a * 2;
        b = b * 3;
    } while (a < 100 || b < 1000);

    printf("a: %d, b: %d at the end of the loop\n", a, b);

    return EXIT_SUCCESS;
}

/* OUTPUT
    a: 8, b: 3
    a: 16, b: 9
    a: 32, b: 27
    a: 64, b: 81
    a: 128, b: 243
    a: 256, b: 729
    a: 512, b: 2187 at the end of the loop
*/