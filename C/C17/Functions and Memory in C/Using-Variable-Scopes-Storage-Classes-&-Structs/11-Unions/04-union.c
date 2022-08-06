#include <stdlib.h>
#include <stdio.h>

int main()
{
    struct Student
    {
        char name[20];
        union Score
        {
            short marks;
            float gpa;
        } score;
    };

    struct Student student_1;

    printf("sizeof(Student.name): %lu\n", sizeof(student_1.name));
    printf("sizeof(Student.score.marks): %lu\n", sizeof(student_1.score.marks));
    printf("sizeof(Student.score.gpa): %lu\n", sizeof(student_1.score.gpa));
    printf("sizeof(Student): %lu\n", sizeof(student_1));

    return EXIT_SUCCESS;
}

/* OUTPUT
    sizeof(Student.name): 20
    sizeof(Student.score.marks): 2
    sizeof(Student.score.gpa): 4
    sizeof(Student): 24
*/