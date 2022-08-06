#include <stdlib.h>
#include <stdio.h>

int main()
{

    struct Student
    {
        int id;
        char name[20];
        float math_score;
        float english_score;
    } student_1;

    printf("sizeof(Student.id): %lu\n", sizeof(student_1.id));
    printf("sizeof(Student.name): %lu\n", sizeof(student_1.name));
    printf("sizeof(Student.math_score): %lu\n", sizeof(student_1.math_score));
    printf("sizeof(Student.english_score): %lu\n", sizeof(student_1.english_score));
    printf("sizeof(Student): %lu\n", sizeof(student_1));

    return EXIT_SUCCESS;
}

/* OUTPUT
    sizeof(Student.id): 4
    sizeof(Student.name): 20
    sizeof(Student.math_score): 4
    sizeof(Student.english_score): 4
    sizeof(Student): 32
*/