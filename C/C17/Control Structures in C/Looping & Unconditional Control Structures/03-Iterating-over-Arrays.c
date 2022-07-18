#include <stdlib.h>
#include <stdio.h>

int main()
{
    float lap_timings[] = {12.3, 15.4, 11.2, 9.8, 13.5, 12.1};

    size_t lap_length = sizeof(lap_timings) / sizeof(lap_timings[0]);

    for (int i = 0; i < lap_length; i++)
    {
        printf("Element %d of the array lap_timings is: %.2f\n", i, lap_timings[i]);
    }

    return EXIT_SUCCESS;
}

/* OUTPUT
    Element 0 of the array lap_timings is: 12.30
    Element 1 of the array lap_timings is: 15.40
    Element 2 of the array lap_timings is: 11.20
    Element 3 of the array lap_timings is: 9.80
    Element 4 of the array lap_timings is: 13.50
    Element 5 of the array lap_timings is: 12.10
*/