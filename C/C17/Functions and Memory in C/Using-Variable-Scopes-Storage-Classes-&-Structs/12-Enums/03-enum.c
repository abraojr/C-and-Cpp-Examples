#include <stdlib.h>
#include <stdio.h>

int main()
{
    enum Weekday
    {
        Sunday = 10,
        Monday = 20,
        Tuesday = 30,
        Wednesday = 40,
        Thursday = 50,
        Friday = 60,
        Saturday = 70
    };

    enum Weekday day_1 = Sunday;
    enum Weekday day_2 = Saturday;

    printf("Value for Sunday: %d\n", day_1);
    printf("Value for Saturday: %d\n", day_2);

    return EXIT_SUCCESS;
}

/* OUTPUT
    Value for Sunday: 10
    Value for Saturday: 70
*/