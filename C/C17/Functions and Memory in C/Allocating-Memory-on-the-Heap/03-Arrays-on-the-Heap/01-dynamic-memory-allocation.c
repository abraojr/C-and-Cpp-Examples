#include <stdlib.h>
#include <stdio.h>

int main()
{
    int *student_age_ptr = (int *)malloc(5 * sizeof(int));

    if (student_age_ptr == NULL)
    {
        printf("Memory not allocated!\n");
        return EXIT_FAILURE;
    }

    student_age_ptr[0] = 12;
    student_age_ptr[1] = 10;
    student_age_ptr[2] = 13;
    student_age_ptr[3] = 14;
    student_age_ptr[4] = 11;

    printf("ADDRESS \t VALUE \n");

    for (int i = 0; i < 5; i++)
    {
        printf("%p \t %d \n", &student_age_ptr[i], student_age_ptr[i]);
    }

    free(student_age_ptr);

    return EXIT_SUCCESS;
}

/* OUTPUT
    ADDRESS 	     VALUE 
    0x7f652aa3a560 	 12 
    0x7f652aa3a564 	 10 
    0x7f652aa3a568 	 13 
    0x7f652aa3a56c 	 14 
    0x7f652aa3a570 	 11 
*/