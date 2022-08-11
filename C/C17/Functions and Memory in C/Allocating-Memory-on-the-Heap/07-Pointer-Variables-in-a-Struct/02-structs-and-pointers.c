#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main()
{
    struct Student
    {
        int id;
        char name[20];
        float math_score;
        float english_score;
    };

    struct Student *student_ptr = (struct Student *)malloc(sizeof(struct Student));

    student_ptr->id = 111;
    strcpy(student_ptr->name, "Janice");
    student_ptr->math_score = 67.78;
    student_ptr->english_score = 64.23;

    printf("Student id: %d\n", student_ptr->id);
    printf("Student name: %s\n", student_ptr->name);
    printf("Student math: %.2f\n", student_ptr->math_score);
    printf("Student english: %.2f\n", student_ptr->english_score);

    return EXIT_SUCCESS;
}

/* OUTPUT
    Student id: 111
    Student name: Janice
    Student math: 67.78
    Student english: 64.23
*/