#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main()
{
    FILE *file_ptr = fopen("../employee-details.bin", "wb");

    if (file_ptr == NULL)
    {
        printf("The file could not be opened\n");

        return EXIT_FAILURE;
    }

    char name[20] = "James Darwin";
    char city[10] = "Seattle";
    int age = 29;
    float salary = 123000.34;

    fwrite(name, sizeof(char), 20, file_ptr);
    fwrite(city, sizeof(char), 10, file_ptr);
    fwrite(&age, sizeof(int), 1, file_ptr);
    fwrite(&salary, sizeof(float), 1, file_ptr);

    fclose(file_ptr);

    return EXIT_SUCCESS;
}