#include <stdlib.h>
#include <stdio.h>

char *get_grade(int score)
{
    char *grade = (char *)malloc(sizeof(char));

    if (score >= 90)
    {
        *grade = 'A';
    }
    else if (score >= 70)
    {
        *grade = 'B';
    }
    else if (score >= 50)
    {
        *grade = 'C';
    }
    else if (score >= 30)
    {
        *grade = 'D';
    }
    else
    {
        *grade = 'F';
    }

    return grade;
}

int main()
{
    char *grade = get_grade(85);
    printf("Grade for score 85 is: %c\n", *grade);

    grade = get_grade(45);
    printf("Grade for score 45 is: %c\n", *grade);

    return EXIT_SUCCESS;
}

/* OUTPUT
    Grade for score 85 is: B
    Grade for score 45 is: D
*/