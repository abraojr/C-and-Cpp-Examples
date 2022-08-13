#include <stdlib.h>
#include <stdio.h>

#define PI 3.14159
#define MAX_LIMIT 5
#define PRINT_STRING "radius = %d, area = %.2f\n"

int main()
{
    for (int r = 1; r < MAX_LIMIT; r++)
    {
        printf(PRINT_STRING, r, PI * r * r);
    }

    return EXIT_SUCCESS;
}

/* OUTPUT
    radius = 1, area = 3.14
    radius = 2, area = 12.57
    radius = 3, area = 28.27
    radius = 4, area = 50.27
*/