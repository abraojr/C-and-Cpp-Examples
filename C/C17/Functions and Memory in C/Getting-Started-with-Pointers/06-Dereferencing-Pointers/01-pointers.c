#include <stdlib.h>
#include <stdio.h>

int main()
{
    int year = 1921;
    int *year_ptr = NULL;

    printf("year value: %d\n", year);
    printf("year address: %p\n", year_ptr);

    // printf("year value: %d\n", *year_ptr); segmentation fault

    printf("\n");

    year_ptr = &year;
    printf("year address: %p\n", year_ptr);

    return EXIT_SUCCESS;
}

/* OUTPUT
    year value: 1921
    year address: 0x0

    year address: 0x7ffea9dd4b7c
*/