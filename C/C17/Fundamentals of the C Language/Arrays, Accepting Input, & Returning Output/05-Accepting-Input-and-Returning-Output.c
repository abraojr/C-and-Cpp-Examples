#include <stdlib.h>
#include <stdio.h>

int main()
{
    char character;
    printf("Enter a character: ");

    character = getchar();

    putchar(character);

    return EXIT_SUCCESS;
}

/* OUTPUT
    Enter a character:
    V
    V
*/