#include <stdlib.h>
#include <stdio.h>

int main()
{
    char letters[] = "ABCD";
    int numbers[] = {100, 200, 300};

    for (int letter_index = 0; letter_index < 4; letter_index++)
    {
        for (int number_index = 0; number_index < 3; number_index++)
        {
            printf("%c - %d\n", letters[letter_index], numbers[number_index]);
        }
    }

    return EXIT_SUCCESS;
}

/* OUTPUT
    A - 100
    A - 200
    A - 300
    B - 100
    B - 200
    B - 300
    C - 100
    C - 200
    C - 300
    D - 100
    D - 200
    D - 300
*/