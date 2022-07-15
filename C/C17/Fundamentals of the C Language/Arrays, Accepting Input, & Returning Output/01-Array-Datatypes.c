#include <stdlib.h>
#include <stdio.h>

int main()
{
    int one_score;
    int scores[3];

    printf("size of integer is: %lu\n", sizeof(one_score));
    printf("size of integer array is: %lu\n", sizeof(scores));

    one_score = 67;

    scores[0] = 23;
    scores[1] = 44;
    scores[2] = 66;

    printf("one_score: %d\n\n", one_score);

    printf("scores[0]: %d\n", scores[0]);
    printf("scores[1]: %d\n", scores[1]);
    printf("scores[2]: %d\n", scores[2]);

    printf("\n---------------------------------\n\n");

    int array_scores[] = {45, 56, 56, 98, 44};

    printf("Original array -------------------------\n");
    printf("array_scores[0]: %d\n", array_scores[0]);
    printf("array_scores[1]: %d\n", array_scores[1]);
    printf("array_scores[2]: %d\n", array_scores[2]);
    printf("array_scores[3]: %d\n", array_scores[3]);
    printf("array_scores[4]: %d\n", array_scores[4]);

    array_scores[0] = 99;
    array_scores[4] = 22;

    printf("\nUpdated array -------------------------\n");
    printf("array_scores[0]: %d\n", array_scores[0]);
    printf("array_scores[1]: %d\n", array_scores[1]);
    printf("array_scores[2]: %d\n", array_scores[2]);
    printf("array_scores[3]: %d\n", array_scores[3]);
    printf("array_scores[4]: %d\n", array_scores[4]);

    return EXIT_SUCCESS;
}

/* OUTPUT

    size of integer is: 4
    size of integer array is: 12
    one_score: 67

    scores[0]: 23
    scores[1]: 44
    scores[2]: 66

    ---------------------------------

    Original array -------------------------
    array_scores[0]: 45
    array_scores[1]: 56
    array_scores[2]: 56
    array_scores[3]: 98
    array_scores[4]: 44

    Updated array -------------------------
    array_scores[0]: 99
    array_scores[1]: 56
    array_scores[2]: 56
    array_scores[3]: 98
    array_scores[4]: 22
*/