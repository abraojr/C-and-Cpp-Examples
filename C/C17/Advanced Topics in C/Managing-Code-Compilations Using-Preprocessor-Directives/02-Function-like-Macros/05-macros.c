#include <stdlib.h>
#include <stdio.h>

int main()
{
    printf("Filename: %s\n", __FILE__);
    printf("Date in MMM DD YYYY format: %s\n", __DATE__);
    printf("Time in HH:MM:SS format: %s\n", __TIME__);
    printf("Line number: %d\n", __LINE__);

    return EXIT_SUCCESS;
}

/*
    Filename: 05-macros.c
    Date in MMM DD YYYY format: Aug 14 2022
    Time in HH:MM:SS format: 02:57:15
    Line number: 9
*/