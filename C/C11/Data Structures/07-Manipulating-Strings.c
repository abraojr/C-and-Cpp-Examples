#include "stdio.h"

int main()
{
    char s1[50];

    strcpy(s1, "String Testing ONE");
    printf("%s: %i\n", s1, strlen(s1));
    strcat(s1, " and More");
    printf("%s: %i\n", s1, strlen(s1));
    printf("%s\n", strrev(s1));
    printf("%s\n", strupr(s1));
    printf("%s\n", strlwr(s1));
    printf("%s\n", strrev(s1));

    char c = getchar();
}

/* OUTPUT:
    String Testing ONE: 18
    String Testing ONE and More: 27
    eroM dna ENO gnitseT gnirtS
    EROM DNA ENO GNITSET GNIRTS
    erom dna eno gnitset gnirts
    string testing one and more
*/