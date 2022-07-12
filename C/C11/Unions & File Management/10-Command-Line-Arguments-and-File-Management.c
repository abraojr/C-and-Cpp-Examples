#include "stdio.h"

int main(int argc, char *argv[])
{
    FILE *file;
    char s[255];

    printf("Command Line Parameters are:\n");
    for (int i = 0; i < argc; i++)
        printf("\t%s\n", argv[i]);

    int curFile = 1;
    while (curFile < argc)
    {
        file = fopen(argv[curFile], "r");
        if (file == NULL)
        {
            printf("Errpr trying to open the source file.\n");
            exit(1);
        }

        while (fgets(s, 255, file) != NULL)
        {
            printf("%s", s);
        }

        fclose(file);
        curFile++;
    }

    char c = getchar();
}
