#include "stdio.h"

typedef struct Date
{
    short year;
    char month;
    char day;
} Date;

Date AddDays(Date, int);

int main()
{

    Date firstDate = {2022, 6, 1};
    Date secondDate = AddDays(firstDate, 15);

    printf("First: %04i-%02i-%02i\n", firstDate.year, firstDate.month, firstDate.day);
    printf("Second: %04i-%02i-%02i\n", secondDate.year, secondDate.month, secondDate.day);

    char c = getchar();
}

Date AddDays(Date dt, int days)
{
    dt.day += days;

    return dt;
}

/* OUTPUT:
    First: 2022-06-01
    Second: 2022-06-16
*/