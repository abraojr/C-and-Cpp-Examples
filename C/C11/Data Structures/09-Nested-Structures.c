#include "stdio.h"

int main()
{
    typedef struct Date
    {
        short year;
        char month;
        char day;
    } Date;

    typedef struct Time
    {
        char hour;
        char minute;
        char second;
    } Time;

    typedef struct DateTime
    {
        Date d;
        Time t;
    } DateTime;

    DateTime dt = {{2014, 6, 30}, {12, 30, 0}};

    printf("%04i-%02i-%02i %02i:%02i:%02i\n", dt.d.year, dt.d.month, dt.d.day, dt.t.hour, dt.t.minute, dt.t.second);

    char c = getchar();
}

/* OUTPUT:
    2014-06-30 12:30:00
*/