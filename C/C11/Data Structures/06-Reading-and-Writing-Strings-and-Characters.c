#include "stdio.h"

int main()
{
    char s1[50];
    char s2[50];
    char s3[50];

    printf("Please enter your name: ");
    scanf("%s", s1);
    printf("Please enter your street address: ");
    scanf("%s", s2);
    printf("Please enter your city, state and zip code: ");
    scanf("%s", s3);

    printf("\n\nYour Address\n");
    printf("%s\n", s1);
    printf("%s\n", s2);
    printf("%s\n", s3);

    char c = getchar();
}

/* OUTPUT:
    Please enter your name:
    Abrao
    Please enter your street address:
    123
    Please enter your city, state and zip code:
    Test


    Your Address
    Abrao
    123
    Test
*/