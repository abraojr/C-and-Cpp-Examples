#include <stdlib.h>
#include <stdio.h>
#include <limits.h>
#include <float.h>

int main()
{
    signed short short_min = SHRT_MIN;
    signed short short_max = SHRT_MAX;
    unsigned short ushort_max = USHRT_MAX;

    printf("Minimum value of signed short: %hd\n", short_min);
    printf("Maximum value of signed short: %hd\n", short_max);
    printf("Maximum value of unsigned short: %hu\n", ushort_max);
    printf("Printing the size of unsigned short: %lu bytes\n", sizeof(ushort_max));

    printf("\n--------------------------------\n\n");

    signed int int_min = INT_MIN;
    signed int int_max = INT_MAX;
    unsigned int uint_max = UINT_MAX;

    printf("Minimum value of signed int: %d\n", int_min);
    printf("Maximum value of signed int: %d\n", int_max);
    printf("Maximum value of unsigned int: %u\n", uint_max);
    printf("Printing the size of unsigned int: %lu bytes\n", sizeof(uint_max));

    printf("\n--------------------------------\n\n");

    signed long long_min = LONG_MIN;
    signed long long_max = LONG_MAX;
    unsigned long ulong_max = ULONG_MAX;

    printf("Minimum value of signed long: %ld\n", long_min);
    printf("Maximum value of signed long: %ld\n", long_max);
    printf("Maximum value of unsigned long: %lu\n", ulong_max);
    printf("Printing the size of unsigned long: %lu bytes\n", sizeof(ulong_max));

    printf("\n--------------------------------\n\n");

    float float_max = FLT_MAX;

    printf("Maximum representable value of float: %f\n", float_max);
    printf("Printing the size of float: %lu bytes\n", sizeof(float_max));

    printf("\n--------------------------------\n\n");

    double double_max = DBL_MAX;

    printf("Maximum representable value of double: %lf\n", double_max);
    printf("Printing the size of double: %lu bytes\n", sizeof(double_max));

    printf("\n--------------------------------\n\n");

    char char_min = SCHAR_MIN;
    char char_max = SCHAR_MAX;
    unsigned char uchar_min = 0;
    unsigned char uchar_max = UCHAR_MAX;

    printf("Minimum value of signed char: %d\n", char_min);
    printf("Maximum value of signed char: %d\n", char_max);
    printf("Minimum value of unsigned char: %d\n", uchar_min);
    printf("Maximum value of unsigned char: %d\n", uchar_max);
    printf("Printing the size of signed char: %lu bytes\n", sizeof(char_max));
    printf("Printing the size of unsigned char: %lu bytes\n", sizeof(uchar_max));

    printf("\n--------------------------------\n\n");

    return EXIT_SUCCESS;
}

/* OUTPUT:
    Minimum value of signed short: -32768
    Maximum value of signed short: 32767
    Maximum value of unsigned short: 65535
    Printing the size of unsigned short: 2 bytes

    --------------------------------

    Minimum value of signed int: -2147483648
    Maximum value of signed int: 2147483647
    Maximum value of unsigned int: 4294967295
    Printing the size of unsigned int: 4 bytes

    --------------------------------

    Minimum value of signed long: -9223372036854775808
    Maximum value of signed long: 9223372036854775807
    Maximum value of unsigned long: 18446744073709551615
    Printing the size of unsigned long: 8 bytes

    --------------------------------

    Maximum representable value of float: 340282346638528859811704183484516925440.000000
    Printing the size of float: 4 bytes

    --------------------------------

    Maximum representable value of double: 179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000
    Printing the size of double: 8 bytes

    --------------------------------

    Minimum value of signed char: -128
    Maximum value of signed char: 127
    Minimum value of unsigned char: 0
    Maximum value of unsigned char: 255
    Printing the size of signed char: 1 bytes
    Printing the size of unsigned char: 1 bytes

    --------------------------------
*/