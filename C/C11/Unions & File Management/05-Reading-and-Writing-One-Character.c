#include "stdio.h"

int main()
{
    FILE *file;
    char fc = 0;

    file = fopen("Reading-and-Writing-One-Character.c", "r");
    if (file == NULL)
    {
        printf("Error trying to open the source file.\n");
        exit(1);
    }

    while (fc != EOF)
    {
        fc = fgetc(file);
        printf("%c", fc);
    }

    fclose(file);

    char c = getchar();
}

/* OUTPUT:
#include "stdio.h"

int main()
{
    FILE *file;
    char fc = 0;

    file = fopen("main.c", "r");
    if (file == NULL)
    {
        printf("Error trying to open the source file.\n");
        exit(1);
    }

    while (fc != EOF)
    {
        fc = fgetc(file)
    }
*/