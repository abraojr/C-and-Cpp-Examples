#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main()
{
    struct Student
    {
        int *id;
        char *name;
        float *math_score;
        float *english_score;
    };

    struct Student student;

    student.id = (int *)malloc(sizeof(int));
    student.name = (char *)calloc(20, sizeof(char));
    student.math_score = (float *)malloc(sizeof(float));
    student.english_score = (float *)malloc(sizeof(float));

    *student.id = 111;
    strcpy(student.name, "Janice");
    *student.math_score = 67.78;
    *student.english_score = 64.23;

    printf("Student id: %d\n", *student.id);
    printf("Student name: %s\n", student.name);
    printf("Student math: %.2f\n", *student.math_score);
    printf("Student english: %.2f\n", *student.english_score);

    free(student.id);
    free(student.name);
    free(student.math_score);
    free(student.english_score);

    return EXIT_SUCCESS;
}

/* OUTPUT
    Student id: 111
    Student name: Janice
    Student math: 67.78
    Student english: 64.23
*/