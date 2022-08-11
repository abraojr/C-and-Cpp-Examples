#include <stdlib.h>
#include <stdio.h>

int main()
{
    int *emp_salary_ptr = (int *)calloc(5, sizeof(int));

    if (emp_salary_ptr == NULL)
    {
        printf("Memory not allocated!\n");
        return EXIT_FAILURE;
    }

    emp_salary_ptr[0] = 120000;
    emp_salary_ptr[1] = 100000;
    emp_salary_ptr[2] = 95000;
    emp_salary_ptr[3] = 56000;
    emp_salary_ptr[4] = 44000;

    printf("ADDRESS \t VALUE \n");
    for (int i = 0; i < 5; i++)
    {
        printf("%p \t %d \n", &emp_salary_ptr[i], emp_salary_ptr[i]);
    }

    free(emp_salary_ptr);

    return EXIT_SUCCESS;
}

/* OUTPUT
    ADDRESS 	     VALUE
    0x7f5b96f12560 	 120000
    0x7f5b96f12564 	 100000
    0x7f5b96f12568 	 95000
    0x7f5b96f1256c 	 56000
    0x7f5b96f12570 	 44000
*/