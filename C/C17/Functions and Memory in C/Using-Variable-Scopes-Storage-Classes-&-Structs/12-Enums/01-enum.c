#include <stdlib.h>
#include <stdio.h>

int main()
{
    enum Weekday
    {
        Sunday,
        Monday,
        Tuesday,
        Wednesday,
        Thursday,
        Friday,
        Saturday
    };

    enum Weekday day_1 = Sunday;
    enum Weekday day_2 = Saturday;

    printf("Value for Sunday: %d\n", day_1);
    printf("Value for Saturday: %d\n", day_2);

    return EXIT_SUCCESS;
}

/* OUTPUT
    Value for Sunday: 0
    Value for Saturday: 6
*/