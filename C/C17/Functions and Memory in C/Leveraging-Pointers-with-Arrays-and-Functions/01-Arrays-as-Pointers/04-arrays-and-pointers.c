#include <stdlib.h>
#include <stdio.h>

int main()
{
    int student_ages[] = {13, 14, 11, 10, 12, 11};
    int *student_age_ptr = student_ages;

    size_t len = sizeof(student_ages) / sizeof(int);

    for (int i = 0; i < len; i++)
    {
        printf("Student age at index %d = %d\n", i, student_ages[i]);
    }

    printf("\n");

    for (int i = 0; i < len; i++)
    {
        printf("Student age at index %d = %d\n", i, student_age_ptr[i]);
    }

    return EXIT_SUCCESS;
}

/* OUTPUT
    Student age at index 0 = 13
    Student age at index 1 = 14
    Student age at index 2 = 11
    Student age at index 3 = 10
    Student age at index 4 = 12
    Student age at index 5 = 11

    Student age at index 0 = 13
    Student age at index 1 = 14
    Student age at index 2 = 11
    Student age at index 3 = 10
    Student age at index 4 = 12
    Student age at index 5 = 11
*/