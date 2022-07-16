#include <stdlib.h>
#include <stdio.h>

int main()
{
    int marks[2][4];

    printf("size of array is: %lu\n\n", sizeof(marks));

    marks[0][0] = 28;
    marks[0][1] = 77;
    marks[0][2] = 34;
    marks[0][3] = 20;

    marks[1][0] = 71;
    marks[1][1] = 48;
    marks[1][2] = 31;
    marks[1][3] = 89;

    printf("student 1 marks in math: %d\n", marks[0][0]);
    printf("student 1 marks in english: %d\n", marks[0][1]);
    printf("student 1 marks in history: %d\n", marks[0][2]);
    printf("student 1 marks in physics: %d\n", marks[0][3]);
    printf("\n");

    printf("student 2 marks in math: %d\n", marks[1][0]);
    printf("student 2 marks in english: %d\n", marks[1][1]);
    printf("student 2 marks in history: %d\n", marks[1][2]);
    printf("student 2 marks in physics: %d\n", marks[1][3]);

    return EXIT_SUCCESS;
}

/* OUTPUT
    size of array is: 32

    student 1 marks in math: 28
    student 1 marks in english: 77
    student 1 marks in history: 34
    student 1 marks in physics: 20

    student 2 marks in math: 71
    student 2 marks in english: 48
    student 2 marks in history: 31
    student 2 marks in physics: 89
*/