#include <stdlib.h>
#include <stdio.h>

int main()
{
    {
        printf("This is a block within {}\n");

        char name[] = "Julie";

        printf("The 'name' variable is accessible in this block: %s\n", name);
    }

    // printf("The 'name' variable is not accessible outside the block: %s\n", name); compile error

    return EXIT_SUCCESS;
}

/* OUTPUT
    This is a block within {}
    The name variable is accessible in this block: Julie
*/