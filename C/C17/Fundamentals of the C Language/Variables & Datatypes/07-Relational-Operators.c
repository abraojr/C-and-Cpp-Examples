#include <stdlib.h>
#include <stdio.h>

int main()
{
    int num_1 = 63;
    int num_2 = 22;
    int res;

    res = num_1 == num_2;
    printf("num_1 equal to num_2?: %d\n\n", res);

    res = num_1 != num_2;
    printf("num_1 not equal to num_2?: %d\n\n", res);

    res = num_1 > num_2;
    printf("num_1 greater than num_2?: %d\n\n", res);

    res = num_1 < num_2;
    printf("num_1 less than num_2?: %d\n\n", res);

    res = num_1 >= num_2;
    printf("num_1 greater than or equal to num_2?: %d\n\n", res);

    res = num_1 <= num_2;
    printf("num_1 less than or equal to num_2?: %d\n\n", res);

    return EXIT_SUCCESS;
}

/* OUTPUT
    num_1 equal to num_2?: 0

    num_1 not equal to num_2?: 1

    num_1 greater than num_2?: 1

    num_1 less than num_2?: 0

    num_1 greater than or equal to num_2?: 1

    num_1 less than or equal to num_2?: 0
*/