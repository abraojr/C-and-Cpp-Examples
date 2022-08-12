#include <stdlib.h>
#include <stdio.h>

int main()
{
    FILE *file_ptr = fopen("../existing-file.txt", "w");

    if (file_ptr == NULL)
    {
        printf("The file could not be opened\n");

        return EXIT_FAILURE;
    }

    const int num_records = 3;

    char name[num_records][15] = {"Alvin Johnson", "Deola Vas", "Kevin Wilson"};
    char department[num_records][15] = {"Production", "Sales", "Marketing"};
    char id[num_records][15] = {"EPRO2109", "ESAL1901", "EMAR1721"};
    int age[num_records] = {25, 31, 29};

    fprintf(file_ptr, "ID, Name, Department, Age\n");

    for (int i = 0; i < num_records; i++)
    {
        fprintf(file_ptr, "%s, %s, %s, %d\n", id[i], name[i], department[i], age[i]);
    }

    fclose(file_ptr);

    return EXIT_SUCCESS;
}