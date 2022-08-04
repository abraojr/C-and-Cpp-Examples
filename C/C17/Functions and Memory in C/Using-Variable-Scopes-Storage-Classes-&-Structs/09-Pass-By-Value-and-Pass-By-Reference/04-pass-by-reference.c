#include <stdlib.h>
#include <stdio.h>

void print_array(int lap_times[], int len);

void update_array(int lap_times[]);

int main()
{
    int lap_times[] = {10, 11, 13, 9, 12, 14};

    printf("Value BEFORE update function call\n");
    print_array(lap_times, 6);

    update_array(lap_times);

    printf("\nValue AFTER update function call\n");
    print_array(lap_times, 6);

    return EXIT_SUCCESS;
}

void print_array(int lap_times[], int len)
{
    printf("[ ");

    for (int i = 0; i < len; i++)
    {
        printf("%d ", lap_times[i]);
    }

    printf("]\n");
}

void update_array(int lap_times[])
{
    lap_times[0] = 1000;
}

/* OUTPUT
    Value BEFORE update function call
    [ 10 11 13 9 12 14 ]
    Value AFTER update function call
    [ 1000 11 13 9 12 14 ]
*/