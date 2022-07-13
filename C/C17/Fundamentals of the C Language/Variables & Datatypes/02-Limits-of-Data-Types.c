#include <stdlib.h>
#include <stdio.h>
#include <limits.h>

int main()
{
    short short_min = SHRT_MIN;
    short short_max = SHRT_MAX;

    printf("Minimum value of short: %hd\n", short_min);
    printf("Maximum value of short: %hd\n", short_max);
    printf("Printing the size of short: %lu bytes\n", sizeof(short_max));

    printf("\n--------------------------------\n\n");

    int int_min = INT_MIN;
    int int_max = INT_MAX;

    printf("Minimum value of int: %d\n", int_min);
    printf("Maximum value of int: %d\n", int_max);
    printf("Printing the size of int: %lu bytes\n", sizeof(int_max));

    printf("\n--------------------------------\n\n");

    long long_min = LONG_MIN;
    long long_max = LONG_MAX;

    printf("Minimum value of long: %ld\n", long_min);
    printf("Maximum value of long: %ld\n", long_max);
    printf("Printing the size of long: %lu bytes\n", sizeof(long_max));

    printf("\n--------------------------------\n\n");

    return EXIT_SUCCESS;
}

/* OUTPUT:
    Minimum value of short: -32768
    Maximum value of short: 32767
    Printing the size of short: 2 bytes

    --------------------------------

    Minimum value of int: -2147483648
    Maximum value of int: 2147483647
    Printing the size of int: 4 bytes

    --------------------------------

    Minimum value of long: -9223372036854775808
    Maximum value of long: 9223372036854775807
    Printing the size of long: 8 bytes

    --------------------------------
*/