#include <stdlib.h>
#include <stdio.h>

char *get_secret_letter(int id)
{
    char *secret_letter = (char *)malloc(sizeof(char));

    *secret_letter = 'W';

    return secret_letter;
}

int main()
{
    char *secret_letter = get_secret_letter(85);

    printf("Secret letter is : %c\n", *secret_letter);

    free(secret_letter);

    printf("(Security risk!) Memory still around %p\n", secret_letter);
    printf("(Security risk!) Secret letter still accessible: %c\n", *secret_letter);

    return EXIT_SUCCESS;
}

/* OUTPUT
    Secret letter is: W
    (Security risk!) Memory still around 0x7f7efbc058a0
    (Security risk!) Secret letter still accessible: W
*/