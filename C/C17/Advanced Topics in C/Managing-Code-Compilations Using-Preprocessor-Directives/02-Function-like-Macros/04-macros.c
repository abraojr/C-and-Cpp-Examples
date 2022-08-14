#include <stdlib.h>
#include <stdio.h>

#define EVEN_ODD(num) ((num % 2 == 0) ? printf("Even: %d\n", num) : printf("Odd: %d\n", num))

#define ODD_EVEN(num)                         \
    {                                         \
        if (num % 2 == 0)                     \
        {                                     \
            return printf("Even: %d\n", num); \
        }                                     \
        else                                  \
        {                                     \
            return printf("Odd: %d\n", num);  \
        }                                     \
    }

int main()
{
    EVEN_ODD(6);
    ODD_EVEN(5);

    return EXIT_SUCCESS;
}

/* OUTPUT
    Even: 6
    Odd: 5
*/
