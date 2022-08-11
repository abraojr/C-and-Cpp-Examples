#include <stdlib.h>
#include <stdio.h>

int main()
{
    FILE *file_ptr = fopen("../existing-file.txt", "r");

    if (file_ptr == NULL)
    {
        printf("The file could not be opened\n");

        return EXIT_FAILURE;
    }

    int ch = getc(file_ptr);

    while (ch != EOF)
    {
        /*Note: This is to show that we read the file character by character.
        The '|' should be printed before every character we display to screen.*/

        putchar('|');
        putchar(ch);

        ch = getc(file_ptr);
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
    |L|o|r|e|m| |i|p|s|u|m| |d|o|l|o|r| |s|i|t| |a|m|e|t| |c|o|n|s|e|c|t|e|t|u|r|,| |a|d|i|p|i|s|i|c|i|n|g| |e|l|i|t|.| |P|e|r|f|e|r|e|n|d|i|s| |m|o|l|e|s|t|i|a|s| |v|o|l|u|p|t|a|t|i|b|u|s| |a|b| |a|m|e|t| |a|u|t|e|m| |v|o|l|u|p|t|a|t|u|m|
    |
    |p|r|a|e|s|e|n|t|i|u|m| |o|f|f|i|c|i|i|s| |d|i|c|t|a| |n|o|b|i|s| |i|p|s|a| |v|o|l|u|p|t|a|s|,| |n|u|m|q|u|a|m| |n|a|t|u|s| |e|l|i|g|e|n|d|i| |l|a|u|d|a|n|t|i|u|m| |e|s|s|e| |e|t|.| |A|d|i|p|i|s|c|i|,| |q|u|i|b|u|s|d|a|m| |m|a|x|i|m|e|?
    End of file reached, contents read successfully!
*/