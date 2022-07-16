#include <stdlib.h>
#include <stdio.h>

int main()
{
    printf("Let's print an integer: %d\n", 56);
    printf("Let's print a character: %c\n", 'H');
    printf("Let's print a string: %s\n", "Hello");

    printf("---------------------------------------\n");

    printf("Let's print a float: %f\n", 23.909);
    printf("Let's print a float truncated to 1 decimal point: %.1f\n", 23.909);

    printf("---------------------------------------\n");

    printf("Let's print a double: %lf\n", 23.909e27);
    printf("Let's print a double truncated to 2 decimal point: %.2lf\n", 23.909e27);

    return EXIT_SUCCESS;
}

/* OUTPUT
    Let's print an integer: 56
    Let's print a character: H
    Let's print a string: Hello
    ---------------------------------------
    Let's print a float: 23.909000
    Let's print a float truncated to 1 decimal point: 23.9
    ---------------------------------------
    Let's print a double: 23908999999999998636263997440.000000
    Let's print a double truncated to 2 decimal point: 23908999999999998636263997440.00
*/