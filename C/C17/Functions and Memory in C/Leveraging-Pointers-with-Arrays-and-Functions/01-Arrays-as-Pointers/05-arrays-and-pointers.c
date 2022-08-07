#include <stdlib.h>
#include <stdio.h>

int main()
{
    int student_ages[] = {13, 14, 11, 10, 12, 11};
    int *student_age_ptr = student_ages;

    printf("---------------Address of the array---------------\n");
    printf("Address of student_ages (integer array): %p\n", student_ages);
    printf("Address of student_ages (via pointer): %p\n", student_age_ptr);

    printf("\n---------------Address of the first element of the array---------------\n");
    printf("Address of student_ages[0]: %p\n", &student_ages[0]);
    printf("Address of student_age_ptr[0]: %p\n", &student_age_ptr[0]);

    return EXIT_SUCCESS;
}

/* OUTPUT
    ---------------Address of the array---------------
    Address of student_ages (integer array): 0x7fff4e626910
    Address of student_ages (via pointer): 0x7fff4e626910

    ---------------Address of the first element of the array---------------
    Address of student_ages[0]: 0x7fff4e626910
    Address of student_age_ptr[0]: 0x7fff4e626910
*/