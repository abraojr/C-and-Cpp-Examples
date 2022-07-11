#include "stdio.h"

int main()
{
    FILE *file;
    char fc = 0;

    file = fopen("Random-Access.c", "r");
    if (file == NULL)
    {
        printf("Error trying to open the source file.\n");
        exit(1);
    }

    fseek(file, 100, SEEK_SET);

    while (fc != EOF)
    {
        fc = fgetc(file);
        printf("%c", fc);
    }

    fclose(file);

    char c = getchar();
}

/* OUTPUT:
    if (file == NULL)
    {
        printf("Error trying to open the source file.\n");
        exit(1);
    }

    fseek(file, 100, SEEK_SET);

    while (fc != EOF)
    {
        fc = fgetc(file);
        printf("%c", fc);
    }

    fclose(file);
*/