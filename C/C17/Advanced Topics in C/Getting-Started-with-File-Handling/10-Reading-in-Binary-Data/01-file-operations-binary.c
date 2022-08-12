#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main()
{
    FILE *file_ptr = fopen("../employee-details.bin", "rb");

    if (file_ptr == NULL)
    {
        printf("The file could not be opened\n");

        return EXIT_FAILURE;
    }

    char name[20];
    char city[10];
    int age;
    float salary;

    fread(name, sizeof(char), 20, file_ptr);
    fread(city, sizeof(char), 10, file_ptr);
    fread(&age, sizeof(int), 1, file_ptr);
    fread(&salary, sizeof(float), 1, file_ptr);

    fclose(file_ptr);

    printf("Name: %s\n", name);
    printf("City: %s\n", city);
    printf("Age: %d\n", age);
    printf("Salary: %.2f\n", salary);

    return EXIT_SUCCESS;
}

/* OUTPUT
    Name: James Darwin
    City: Seattle
    Age: 29
    Salary: 123000.34
*/