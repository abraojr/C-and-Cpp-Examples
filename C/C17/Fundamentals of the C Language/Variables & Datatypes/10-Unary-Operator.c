#include <stdlib.h>
#include <stdio.h>

int main()
{
    int num_1 = 90;
    int num_2 = 90;

    printf("original num_1: %d\n\n", num_1);

    num_1++;

    printf("updated num_1: %d\n\n", num_1);

    printf("original num_2: %d\n\n", num_2);

    ++num_2;

    printf("updated num_2: %d\n\n", num_2);

    printf("\n---------------------------------\n\n");

    int num_3 = 100;
    int num_4 = 100;

    printf("original num_3: %d\n\n", num_3);

    int result_1 = num_3++;

    printf("updated num_3: %d\n\n", num_3);
    printf("result_1: %d\n\n", result_1);

    printf("original num_4: %d\n\n", num_4);

    int result_2 = ++num_4;

    printf("updated num_4: %d\n\n", num_4);
    printf("result_2: %d\n\n", result_2);

    return EXIT_SUCCESS;
}

/* OUTPUT

    original num_1: 90

    updated num_1: 91

    original num_2: 90

    updated num_2: 91


    ---------------------------------

    original num_3: 100

    updated num_3: 101

    result_1: 100

    original num_4: 100

    updated num_4: 101

    result_2: 101
*/