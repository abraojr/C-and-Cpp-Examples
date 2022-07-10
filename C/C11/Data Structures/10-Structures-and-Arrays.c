#include "stdio.h"

int main()
{
    typedef struct Date
    {
        short year;
        char month;
        char day;
    } Date;

    Date dt[5] = {{2022, 4, 27}, {2022, 5, 28}, {2022, 6, 29}, {2022, 7, 30}, {2022, 8, 31}};

    printf("%04i-%02i-%02i\n", dt[2].year, dt[2].month, dt[2].day);

    char c = getchar();
}

/* OUTPUT:
    2022-06-29
*/