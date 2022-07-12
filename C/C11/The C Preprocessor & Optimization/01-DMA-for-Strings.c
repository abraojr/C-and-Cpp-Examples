#include "stdio.h"

int main()
{
    char *s;
    s = malloc(100);
    strcpy(s, "This is a test string to show that some memory has been allocated.");

    printf("%s\n", s);

    free(s);

    char c = getchar();
}