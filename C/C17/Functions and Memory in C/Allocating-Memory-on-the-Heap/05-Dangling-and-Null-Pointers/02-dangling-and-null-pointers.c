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

    secret_letter = NULL;

    printf("Cannot access the memory anymore: %p\n", secret_letter);

    return EXIT_SUCCESS;
}

/* OUTPUT
    Secret letter is : W
    Cannot access the memory anymore: 0x0
*/