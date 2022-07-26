#include <stdlib.h>
#include <stdio.h>

int main()
{
    char first_string[] = "12345";
    char second_string[] = "    12345";
    char third_string[] = "    12345abcd";
    char fourth_string[] = "    123a45   ";

    int first_integer = atoi(first_string);
    int second_integer = atoi(second_string);
    int third_integer = atoi(third_string);
    int fourth_integer = atoi(fourth_string);
    // int fifth_integer = atoi(12345); It won't work

    printf("We now have an integer: %d, %d, %d and %d\n", first_integer, second_integer, third_integer, fourth_integer);

    if ((first_integer == 12345 && second_integer == 12345) && (third_integer == 12345 && fourth_integer == 123))
    {
        printf("We can perform integer comparisons!\n");
    }

    return EXIT_SUCCESS;
}

/* OUTPUT
    We now have an integer: 12345, 12345, 12345 and 123
    We can perform integer comparisons!
*/