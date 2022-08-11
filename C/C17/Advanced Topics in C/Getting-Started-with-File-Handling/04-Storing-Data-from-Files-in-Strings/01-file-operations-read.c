#include <stdlib.h>
#include <stdio.h>

int main()
{
    FILE *file_ptr = fopen("../existing-file.txt", "r");
    char data_buffer[1048];

    if (file_ptr == NULL)
    {
        printf("The file could not be opened\n");

        return EXIT_FAILURE;
    }

    while (fgets(data_buffer, 1048, file_ptr) != NULL)
    {
        /*Note: This is to show that we read the file character by character.
        The '|' should be printed before every character we display to screen.*/

        putchar('|');
        printf("%s", data_buffer);

        fflush(stdout);
    }

    if (feof(file_ptr))
    {
        printf("\nEnd of file reached, contents read successfully!\n");
    }
    else
    {
        printf("Something went wrong, end of file was not reached.");
    }

    fclose(file_ptr);

    return EXIT_SUCCESS;
}

/* OUTPUT
    |Lorem ipsum dolor sit amet consectetur, adipisicing elit. Perferendis molestias voluptatibus ab amet autem voluptatum
    |praesentium officiis dicta nobis ipsa voluptas, numquam natus eligendi laudantium esse et. Adipisci, quibusdam maxime?
    End of file reached, contents read successfully!
*/