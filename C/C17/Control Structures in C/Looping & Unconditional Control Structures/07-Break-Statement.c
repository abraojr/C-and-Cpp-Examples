#include <stdlib.h>
#include <stdio.h>

int main()
{
    int scores[] = {45, 57, 68, 23, 97, 72, 34, 85};

    size_t scores_len = sizeof(scores) / sizeof(scores[0]);

    for (int i = 0; i < scores_len; i++)
    {
        printf("element %d score %d\n", i, scores[i]);

        if (scores[i] < 40)
        {
            printf("FOUND a failing score! Element %d score %d\n", i, scores[i]);
            break;
        }
    }

    printf("Outside of the loop now\n");

    return EXIT_SUCCESS;
}

/* OUTPUT
    element 0 score 45
    element 1 score 57
    element 2 score 68
    element 3 score 23
    FOUND a failing score! Element 3 score 23
    Outside of the loop now
*/