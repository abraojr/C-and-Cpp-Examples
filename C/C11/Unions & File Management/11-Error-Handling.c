#include "stdio.h"

int main()
{
    FILE *file;
    char fc = 0;

    file = fopen("Error-Handling.c", "r");
    if (file == NULL)
    {
        printf("Errpr trying to open the source file.\n");
        exit(1);
    }

    do
    {
        fc = fgetc(file);
        if (ferror(file) == 0)
            printf("%c", fc);
    } while (feof(file) == 0);

    fclose(file);

    char c = getchar();
}
