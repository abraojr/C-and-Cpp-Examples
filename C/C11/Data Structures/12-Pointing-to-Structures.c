#include "stdio.h"

int main()
{
    typedef struct Date
    {
        short year;
        char month;
        char day;
    } Date;

    Date d1 = {2022, 6, 1};
    Date *d2 = &d1;
    d1.month = 9;

    printf("First: %04i-%02i-%02i\n", d1.year, d1.month, d1.day);
    printf("Second: %04i-%02i-%02i\n", d2->year, d2->month, d2->day);

    char c = getchar();
}

/* OUTPUT:
    First: 2022-09-01
    Second: 2022-09-01
*/