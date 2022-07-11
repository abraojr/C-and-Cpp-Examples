#include "stdio.h"

int main()
{
    FILE *file;

    file = fopen("Opening-and-Closing-Files.c", "r");
    if (file == NULL)
        printf("Error trying to open the source file.\n");
    else
        printf("%i %i\n", file, file->_file);

    fclose(file);

    char c = getchar();
}