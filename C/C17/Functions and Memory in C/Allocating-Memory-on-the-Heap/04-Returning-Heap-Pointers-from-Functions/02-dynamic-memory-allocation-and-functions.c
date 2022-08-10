#include <stdlib.h>
#include <stdio.h>

char *get_grades(int *scores, int length)
{
    char *grades = (char *)malloc(length * sizeof(char));

    for (int i = 0; i < length; i++)
    {
        int score = *(scores + i);

        if (score >= 90)
        {
            *(grades + i) = 'A';
        }
        else if (score >= 70)
        {
            *(grades + i) = 'B';
        }
        else if (score >= 50)
        {
            *(grades + i) = 'C';
        }
        else if (score >= 30)
        {
            *(grades + i) = 'D';
        }
        else
        {
            *(grades + i) = 'F';
        }
    }

    return grades;
}

int main()
{
    int student_scores[] = {98, 75, 85, 69, 35, 55, 27};

    char *grades = get_grades(student_scores, 7);

    for (int i = 0; i < 7; i++)
    {
        printf("Student grade for score %d = %c\n", *(student_scores + i), *(grades + i));
    }

    free(grades);

    return EXIT_SUCCESS;
}

/* OUTPUT
    Student grade for score 98 = A
    Student grade for score 75 = B
    Student grade for score 85 = B
    Student grade for score 69 = C
    Student grade for score 35 = D
    Student grade for score 55 = C
    Student grade for score 27 = F
*/