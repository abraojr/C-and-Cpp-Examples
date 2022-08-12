#include <stdlib.h>
#include <stdio.h>
#include <string.h>

typedef struct
{
    char name[20];
    char city[20];
    int age;
    float salary;
} Employee;

int main()
{
    FILE *file_ptr = fopen("../employee-intfo.bin", "wb");

    if (file_ptr == NULL)
    {
        printf("The file could not be opened\n");

        return EXIT_FAILURE;
    }

    Employee employee;

    strcpy(employee.name, "Nancy");
    strcpy(employee.city, "Los Angeles");
    employee.age = 34;
    employee.salary = 123400.45;

    fwrite(&employee, sizeof(Employee), 1, file_ptr);

    fclose(file_ptr);

    return EXIT_SUCCESS;
}