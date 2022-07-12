#include "stdio.h"

int main()
{
    typedef struct Date
    {
        short year;
        char month;
        char day;
    } Date;

    Date *dt = calloc(10, sizeof(Date));

    for (int i = 0; i < 10; i++)
    {
        dt[i].year = 2000 + i;
        dt[i].month = i;
        dt[i].day = i * 2 + 1;

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
    2005-05-11
    2006-06-13
    2007-07-15
    2008-08-17
    2009-09-19
*/