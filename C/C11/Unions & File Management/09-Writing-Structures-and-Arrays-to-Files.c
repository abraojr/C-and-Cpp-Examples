#include "stdio.h"

int main()
{
    typedef struct Date
    {
        short year;
        char month;
        char day;
    } Date;

    Date dt[5] = {{2022, 6, 30}, {2022, 7, 31}, {2022, 8, 31}, {2022, 9, 30}, {2022, 10, 31}};
    Date dt2[5];

    FILE *file;
    char fc = 0;

    file = fopen("Output.txt", "w");
    if (file == NULL)
    {
        printf("Error trying to open the source file.\n");
        exit(1);
    }

    fwrite(dt, sizeof(Date), 5, file);
    fclose(file);

    file = fopen("Output.txt", "r");
    if (file == NULL)
    {
        printf("Error trying to open the source file.\n");
        exit(1);
    }

    fread(dt2, sizeof(Date), 5, file);
    fclose(file);

    for (int i = 0; i < 5; i++)
        printf("%i: %04i-%02i-%02i\n", i, dt2[i].year, dt2[i].month, dt2[i].day);

    char c = getchar();
}

/* OUTPUT:
    0: 2022-06-30
    1: 2022-07-31
    2: 2022-08-31
    3: 2022-09-30
    4: 2022-10-31
*/