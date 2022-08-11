#include <stdlib.h>
#include <stdio.h>

int main()
{
    int *emp_salary_ptr = (int *)calloc(1, sizeof(int));

    *emp_salary_ptr = 30000;

    printf("Salary of only employee: %d\n", *emp_salary_ptr);

    free(emp_salary_ptr);

    return EXIT_SUCCESS;
}

/* OUTPUT
    Salary of only employee: 30000
*/