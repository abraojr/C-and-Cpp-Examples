#include <stdlib.h>
#include <stdio.h>

int main()
{
    FILE *file_ptr = fopen("../existing-file.txt", "r");

    if (file_ptr == NULL)
    {
        printf("The file could not be opened\n");
    }
    else
    {
        printf("The file was opened successfully! %p\n", file_ptr);
    }

    fclose(file_ptr);

    return EXIT_SUCCESS;
}

/* OUTPUT
    The file was opened successfully! 0x7f4fa16d5560
*/