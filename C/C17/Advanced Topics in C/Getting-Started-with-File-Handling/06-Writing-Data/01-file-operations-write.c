#include <stdlib.h>
#include <stdio.h>

int main()
{
    FILE *file_ptr = fopen("../quotes-file.txt", "w");

    if (file_ptr == NULL)
    {
        printf("The file could not be opened\n");

        return EXIT_FAILURE;
    }

    char quote[] = "Life is a long lesson in humility. \n -James M. Barrie\n";

    for (int i = 0; quote[i] != '\0'; i++)
    {
        fputc(quote[i], file_ptr);
    }

    fclose(file_ptr);

    return EXIT_SUCCESS;
}