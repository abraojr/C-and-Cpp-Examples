#include "stdio.h"

int main()
{
    printf("String: %s\n", "This is a string");
    printf("Char: %c\n", 'A');
    printf("Integer: %i\n", 1234567890);
    printf("Decimal: %012d\n", 1234567890);
    printf("Octal: %o\n", 1234567890);
    printf("Hexadecimal: %x\n", 1234567890);
    printf("Float: %g\n", 12345.6789);
    printf("Float: %f\n", 12345.6789);
    printf("Float: %e\n", 12345.6789);
    printf("Float: %5.4f\n", 12345.6789);

    char c = getchar();
}

/* OUTPUT:
    String: This is a string
    Char: A
    Integer: 1234567890
    Decimal: 001234567890
    Octal: 11145401322
    Hexadecimal: 499602d2
    Float: 12345.7
    Float: 12345.678900
    Float: 1.234568e+04
    Float: 12345.6789
*/