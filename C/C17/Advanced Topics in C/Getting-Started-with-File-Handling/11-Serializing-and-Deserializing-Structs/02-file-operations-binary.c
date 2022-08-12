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
    FILE *file_ptr = fopen("../employee-intfo.bin", "rb");

    if (file_ptr == NULL)
    {
        printf("The file could not be opened\n");

        return EXIT_FAILURE;
    }

    Employee employee;

    fread(&employee, sizeof(Employee), 1, file_ptr);

    fclose(file_ptr);

    printf("Name: %s\n", employee.name);
    printf("City: %s\n", employee.city);
    printf("Age: %d\n", employee.age);
    printf("Salary: %.2f\n", employee.salary);

    return EXIT_SUCCESS;
}

/*  OUTPUT
    Name: Nancy
    City: Los Angeles
    Age: 34
    Salary: 123400.45
*/