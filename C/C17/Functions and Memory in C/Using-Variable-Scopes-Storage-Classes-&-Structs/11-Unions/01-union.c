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

    printf("sizeof(Score.marks): %lu\n", sizeof(score_1.marks));
    printf("sizeof(Score.gpa): %lu\n", sizeof(score_1));
    printf("sizeof(Score): %lu\n", sizeof(score_1));

    return EXIT_SUCCESS;
}

/* OUTPUT
    sizeof(Score.marks): 2
    sizeof(Score.gpa): 4
    sizeof(Score): 4
*/