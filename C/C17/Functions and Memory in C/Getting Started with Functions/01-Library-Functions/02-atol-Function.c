#include <stdlib.h>
#include <stdio.h>

int main()
{
    char first_string[] = "1234578902384";

    long first_long = atol(first_string);

    printf("We now have a long: %ld\n", first_long);

    if (first_long == 1234578902384)
    {
        printf("We can perform long comparisons!\n");
    }

    return EXIT_SUCCESS;
}

/* OUTPUT
    We now have a long: 1234578902384
    We can perform long comparisons!
*/