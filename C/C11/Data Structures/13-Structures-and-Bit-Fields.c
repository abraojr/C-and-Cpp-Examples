#include "stdio.h"

int main()
{
    typedef struct DateTime
    {
        unsigned int year : 12;
        unsigned int month : 4;
        unsigned int day : 5;
        unsigned int hour : 5;
        unsigned int minute : 6;
    } DateTime;

    DateTime dt = {2014, 6, 1, 23, 59};
    dt.year = 2022;
    dt.month = 12;
    dt.day = 25;

    printf("%04i-%02i-%02i %02i:%02i\n", dt.year, dt.month, dt.day, dt.hour, dt.minute);

    char c = getchar();
}

/* OUTPUT:
    2022-12-25 23:59
*/