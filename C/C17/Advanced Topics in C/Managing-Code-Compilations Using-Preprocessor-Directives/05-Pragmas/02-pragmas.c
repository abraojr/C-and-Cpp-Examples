#include <stdlib.h>
#include <stdio.h>

#pragma clang diagnostic error "-Wformat"

int main()
{
    int a = 3, b = 6;

    int result = a + b;

    printf("%d + %d = %d %d\n", a, b, result);

    return EXIT_SUCCESS;
}

/* OUTPUT
    1 error generated.
*/