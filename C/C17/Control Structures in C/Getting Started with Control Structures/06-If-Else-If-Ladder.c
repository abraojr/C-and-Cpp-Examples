#include <stdlib.h>
#include <stdio.h>

int main()
{
    int score;

    printf("Please enter your total score out of 100: ");
    scanf("%d", &score);

    char grade = 'F';
    if (score > 90)
    {
        grade = 'A';
    }
    else if (score > 70)
    {
        grade = 'B';
    }
    else if (score > 50)
    {
        grade = 'C';
    }
    else if (score > 40)
    {
        grade = 'D';
    }

    printf("Score %d, your grade for this term is %c\n\n", score, grade);

    return EXIT_SUCCESS;
}

/* OUTPUT
    Please enter your total score out of 100:
    83
    Score 83, your grade for this term is B
*/