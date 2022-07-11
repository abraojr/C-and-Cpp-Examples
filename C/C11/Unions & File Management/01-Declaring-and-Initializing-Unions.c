#include "stdio.h"

int main()
{
    typedef union InternalRepresentation
    {
        int integer;
        float floating;
    } InternalRepresentation;

    InternalRepresentation ir = {0};
    ir.floating = 123.456;
    printf("%g %i\n", ir.floating, ir.integer);

    ir.integer = 1234567890;
    printf("%g %i\n", ir.floating, ir.integer);

    char c = getchar();
}

/* OUTPUT:
    123.456 1123477881
    1.22889e+06 1234567890
*/