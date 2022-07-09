#include "stdio.h"

typedef struct Date
{
    char month;
    char day;
    short year;
} Date;

int main()
{
    int *i1 = 12345;
    float f1 = 123.456F;
    float *f2 = &f1;
    char *string = "This is a string or character array.";
    printf("%i %f %s\n", i1, *f2, string);

    Date d = {.month = 6, .day = 25, .year = 2001};
    Date *dt = &d;
    printf("%02i/%02i/%04i\n", dt->month, dt->day, dt->year);

    char c = getchar();
}

/* OUTPUT:
    12345 123.456001 This is a string or character array.
    06/25/2001
*/