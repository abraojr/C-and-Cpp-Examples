#include "stdbool.h"

typedef enum DaysOfTheWeek
{
    Sunday = 0,
    Monday,
    Tuesday,
    Wednesday,
    Thursday,
    Friday,
    Saturday
} DaysOfTheWeek;

typedef struct Date
{
    char month;
    char day;
    short year;
} Date;

const Date GregorianStart = {.month = 2, .day = 24, .year = 1582};

DaysOfTheWeek WeekDay(Date);
Date AddDays(Date, int);
bool IsLeapYear(Date);