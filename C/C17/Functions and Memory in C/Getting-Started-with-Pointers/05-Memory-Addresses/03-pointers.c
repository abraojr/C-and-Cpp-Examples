#include <stdlib.h>
#include <stdio.h>

int main()
{
    int year = 1921;
    int *year_ptr = &year;

    printf("year value: %d\n", year);
    printf("year address: %p\n", year_ptr);

    printf("\n");

    printf("What does this print?: %d\n", *&year);
    printf("What does this print?: %p\n", &*year_ptr);

    return EXIT_SUCCESS;
}

/* OUTPUT
    year value: 1921
    year address: 0x7ffdecd7b99c

    What does this print?: 1921
    What does this print?: 0x7ffdecd7b99c
*/