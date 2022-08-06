#include <stdlib.h>
#include <stdio.h>

int main()
{
    union Score
    {
        short marks;
        float gpa;
    };

    union Score score_1;

    score_1.gpa = 4.66;

    printf("Score.marks: %d\n", score_1.marks);
    printf("Score.gpa: %f\n", score_1.gpa);

    return EXIT_SUCCESS;
}

/* OUTPUT
    Score.marks: 7864
    Score.gpa: 4.660000
*/