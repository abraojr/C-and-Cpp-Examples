#include "stdio.h"

int main()
{
    typedef struct Date
    {
        short year;
        char month;
        char day;
    } Date;

    Date *dt = calloc(5, sizeof(Date));

    for (int i = 0; i < 5; i++)
    {
        dt[i].year = 2000 + i;
        dt[i].month = i;
        dt[i].day = i * 2 + 1;

        printf("%04i-%02i-%02i\n", dt[i].year, dt[i].month, dt[i].day);
    }

    dt = realloc(dt, 10 * sizeof(Date));
    for (int i = 5; i < 10; i++)
    {
        dt[i].year = 2010 + i;
        dt[i].month = i * 3 % 12 + 1;
        dt[i].day = i * 3 + 1;
    }

    for (int i = 0; i < 10; i++)
    {
        printf("%04i-%02i-%02i\n", dt[i].year, dt[i].month, dt[i].day);
    }

    free(dt);

    char c = getchar();
}

/* OUTPUT:
    2000-00-01
    2001-01-03
    2002-02-05
    2003-03-07
    2004-04-09
    2000-00-01
    2001-01-03
    2002-02-05
    2003-03-07
    2004-04-09
    2015-04-16
    2016-07-19
    2017-10-22
    2018-01-25
    2019-04-28
*/