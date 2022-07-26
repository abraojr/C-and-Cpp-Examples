#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main()
{
    char full_name[] = "Deborah Summerhouse";

    int string_len = strlen(full_name);

    printf("The lenght of the string %s is %d\n", full_name, string_len);

    for (int i = 0; i < strlen(full_name); i++)
    {
        printf("%c ", full_name[i]);
    }

    printf("\n\n");

    return EXIT_SUCCESS;
}

/*
    The lenght of the string Deborah Summerhouse is 19
    D e b o r a h   S u m m e r h o u s e
*/