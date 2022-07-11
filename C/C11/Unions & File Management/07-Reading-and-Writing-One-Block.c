#include "stdio.h"

int main()
{
    FILE *file;
    char s[255];
    int charsRead = 255;

    file = fopen("Reading-and-Writing-One-Block.c", "r");
    if (file == NULL)
    {
        printf("Error trying to open the source file.\n");
        exit(1);
    }

    while (charsRead == 255)
    {
        charsRead = fread(&s, sizeof(char), 255, file);
        for (int i = 0; i < charsRead; i++)
            printf("%c", s[i]);
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
    int charsRead = 255;

    file = fopen("Reading-and-Writing-One-Block.c", "r");
    if (file == NULL)
    {
        printf("Error trying to open the source file.\n");
        exit(1);
    }

    while (charsRead == 255)
    {
        charsRead = fread(&s, sizeof(char), 255, file);
        for (int i = 0; i < charsRead; i++)
            printf("%c", s[i]);
    }

    fclose(file);

    char c = getchar();
}
*/