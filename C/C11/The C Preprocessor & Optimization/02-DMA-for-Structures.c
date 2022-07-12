#include "stdio.h"

int main()
{
    typedef struct Date
    {
        short year;
        char month;
        char day;
    } Date;

    Date *d1 = malloc(sizeof(Date));
    Date *d2 = calloc(1, sizeof(Date));

    d1->year = 2022;
    d1->month = 12;
    d1->day = 25;

    d2[0].year = 2022;
    d2[0].month = 1;
    d2[0].day = 1;

    printf("%04i-%02i-%02i\n", d1->year, d1->month, d1->day);
    printf("%04i-%02i-%02i\n", d2[0].year, d2[0].month, d2[0].day);

    free(d1);
    free(d2);

    char c = getchar();
}

/* OUTPUT:
    2022-12-25
    2022-01-01
*/