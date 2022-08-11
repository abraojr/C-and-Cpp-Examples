#include <stdlib.h>
#include <stdio.h>
#include <errno.h>
#include <string.h>

int main()
{
    FILE *file_ptr = fopen("../non-existing-file.txt", "r");

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
    The file could not be opened, error number: 2
    Error opening file: No such file or directory
*/