#include <stdlib.h>
#include <stdio.h>

int main()
{
    int count = 0;
    int num_tickets = 3;
    int age;

    while (count < num_tickets)
    {
        printf("Please enter your age: ");
        scanf("%d", &age);

        if (age < 12)
        {
            printf("Sorry this is a movie for 12 and over.\n");

            continue;
        }

        printf("Here is your ticket - number: %d\n", count);
        count++;
    }

    printf("Outside of the loop now - sold %d tickets\n", count);

    return EXIT_SUCCESS;
}

/* OUTPUT
    Please enter your age:
    18
    Here is your ticket - number: 0
    Please enter your age:
    7
    Sorry this is a movie for 12 and over.
    Please enter your age:
    45
    Here is your ticket - number: 1
    Please enter your age:
    22
    Here is your ticket - number: 2
    Outside of the loop now - sold 3 tickets
*/