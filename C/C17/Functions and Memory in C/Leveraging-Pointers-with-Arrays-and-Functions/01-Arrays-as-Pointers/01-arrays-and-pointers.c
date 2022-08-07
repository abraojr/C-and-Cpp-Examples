#include <stdlib.h>
#include <stdio.h>

int main()
{
    int student_age = 15;

    int student_ages[] = {13, 14, 11, 10, 12, 11};

    printf("Address of student_age (integer): %p\n", &student_age);
    printf("Address of student_ages (integer array): %p\n", student_ages);

    return EXIT_SUCCESS;
}

/* OUTPUT
    Address of student_age (integer): 0x7ffd8b4b74cc
    Address of student_ages (integer array): 0x7ffd8b4b74d0
*/