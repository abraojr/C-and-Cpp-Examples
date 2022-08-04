#include <stdlib.h>
#include <stdio.h>

int main()
{
    extern float pi;
    extern float e;

    printf("The value of pi: %f\n", pi);
    printf("The value of e: %f\n", e);

    return EXIT_SUCCESS;
}

/* OUTPUT
    The value of pi: 3.141590
    The value of e: 2.718280
*/