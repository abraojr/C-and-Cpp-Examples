#include <stdlib.h>
#include <stdio.h>

int main()
{
    char first_string[] = "1234.5678";

    float first_float = atof(first_string);

    printf("We now have a float: %f\n", first_float);

    printf("Add 100 to value: %f\n", first_float + 100);

    return EXIT_SUCCESS;
}

/* OUTPUT
    We now have a float: 1234.567749
    Add 100 to value: 1334.567749
*/