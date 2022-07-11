#include "stdio.h"

int main()
{
    FILE *file;
    char s[255];

    file = fopen("Reading-and-Writing-One-Line.c", "r");
    if (file == NULL)
    {
        printf("Error trying to open the source file.\n");
        exit(1);
    }

    while (fgets(s, 255, file) != NULL)
    {
        printf("%s", s);
    }

    fclose(file);

    char c = getchar();
}

/* OUTPUT:
#include "stdio.h"

int main()
{
    FILE *file;
    char s[255];

    file = fopen("Reading-and-Writing-One-Line.c", "r");
    if (file == NULL)
    {
        printf("Error trying to open the source file.\n");
        exit(1);
    }

    while (fgets(s, 255, file) != NULL)
    {
        printf("%s", s);
    }

    fclose(file);

    char c = getchar();
}

*/