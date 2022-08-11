#include <stdlib.h>
#include <stdio.h>

int main()
{
    char id[15];
    char name[20];
    char department[15];
    int age;

    FILE *file_ptr = fopen("../employee-details.csv", "r");

    if (file_ptr == NULL)
    {
        printf("The file could not be opened\n");

        return EXIT_FAILURE;
    }

    fscanf(file_ptr, "%*[^\n]\n");
    while (fscanf(file_ptr, "%[^,],%[^,],%[^,],%d\n", id, name, department, &age) != EOF)
    {
        putchar('|');
        printf("%s %s %s %d\n", id, name, department, age);
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
    |EPRO2109 Alvin Johnson Production 25
    |ESAL1901 Deola Vas Accounts 31
    |EMAR1721 Kevin Wilson Marketing 29

    End of file reached, contents read successfully!
*/