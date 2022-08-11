#include <stdlib.h>
#include <stdio.h>
#include <errno.h>
#include <string.h>

int main()
{
    FILE *file_ptr = fopen("../existing-file.txt", "a");

    if (file_ptr == NULL)
    {
        printf("The file could not be opened, error number: %d\n", errno);
        printf("Error opening file: %s\n", strerror(errno));
    }
    else
    {
        printf("The file was opened successfully! %p\n", file_ptr);
    }

    fclose(file_ptr);

    return EXIT_SUCCESS;
}

/* OUTPUT
    The file was opened successfully! 0x7f2ab0ea8560
*/