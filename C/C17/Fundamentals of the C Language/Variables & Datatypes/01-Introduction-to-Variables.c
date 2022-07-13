#include <stdlib.h>
#include <stdio.h>

int main()
{
    int int_variable_1 = 10;
    int int_variable_2 = 20;
    float float_variable_1 = 10.11;
    float float_variable_2 = 20.22;
    char char_variable_1 = 'C';
    char char_variable_2 = 'd';

    printf("Printing the value of the first integer variable: %d\n", int_variable_1);
    printf("Printing the value of the second integer variable: %d\n", int_variable_2);
    printf("Printing the value of the first float variable: %f\n", float_variable_1);
    printf("Printing the value of the second float variable: %f\n", float_variable_2);
    printf("Printing the value of the first char variable: %c\n", char_variable_1);
    printf("Printing the value of the second char variable: %c\n", char_variable_2);

    return EXIT_SUCCESS;
}

/* OUTPUT:
    Printing the value of the first integer variable: 10
    Printing the value of the second integer variable: 20
    Printing the value of the first float variable: 10.110000
    Printing the value of the second float variable: 20.219999
    Printing the value of the first char variable: C
    Printing the value of the second char variable: d
*/