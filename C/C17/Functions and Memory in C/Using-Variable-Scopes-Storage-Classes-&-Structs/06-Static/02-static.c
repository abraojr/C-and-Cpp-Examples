#include <stdlib.h>
#include <stdio.h>

void increment_and_print_counter()
{
    static int counter = 0;

    counter++;

    printf("Counter value is: %d\n", counter);
}

int main()
{
    increment_and_print_counter();
    increment_and_print_counter();
    increment_and_print_counter();

    return EXIT_SUCCESS;
}

/* OUTPUT
    Counter value is: 1
    Counter value is: 2
    Counter value is: 3
*/