#include <stdlib.h>
#include <stdio.h>

int main()
{
    int num_1 = 23;
    int num_2 = 78;

    int res = (num_1 > 10) && (num_2 > 10);
    printf("(num_1 > 10) && (num_2 > 10)? %d\n\n", res);

    res = (num_1 > 10) && (num_2 > 100);
    printf("(num_1 > 10) && (num_2 > 100)? %d\n\n", res);

    res = (num_1 > 100) && (num_2 > 10);
    printf("(num_1 > 100) && (num_2 > 10)? %d\n\n", res);

    res = (num_1 > 100) && (num_2 > 100);
    printf("(num_1 > 100) && (num_2 > 100)? %d\n\n", res);

    printf("\n--------------------------------------\n\n");

    res = (num_1 > 10) || (num_2 > 10);
    printf("(num_1 > 10) || (num_2 > 10)? %d\n\n", res);

    res = (num_1 > 10) || (num_2 > 100);
    printf("(num_1 > 10) || (num_2 > 100)? %d\n\n", res);

    res = (num_1 > 100) || (num_2 > 10);
    printf("(num_1 > 100) || (num_2 > 10)? %d\n\n", res);

    res = (num_1 > 100) || (num_2 > 100);
    printf("(num_1 > 100) || (num_2 > 100)? %d\n\n", res);

    printf("\n--------------------------------------\n\n");

    res = (num_1 > 10);
    printf("(num_1 >10)? %d\n\n", res);

    res = !(num_1 > 10);
    printf("!(num_1 >10)? %d\n\n", res);

    res = (num_1 > 10) && (num_2 > 10);
    printf("(num_1 > 10) && (num_2 > 10)? %d\n\n", res);

    res = !((num_1 > 10) && (num_2 > 10));
    printf("!((num_1 > 10) && (num_2 > 10))? %d\n\n", res);

    res = (num_1 > 100) || (num_2 > 100);
    printf("(num_1 > 100) || (num_2 > 100)? %d\n\n", res);

    res = !((num_1 > 100) || (num_2 > 100));
    printf("!((num_1 > 100) || (num_2 > 100))? %d\n\n", res);

    return EXIT_SUCCESS;
}

/* OUTPUT
    (num_1 > 10) && (num_2 > 10)? 1

    (num_1 > 10) && (num_2 > 100)? 0

    (num_1 > 100) && (num_2 > 10)? 0

    (num_1 > 100) && (num_2 > 100)? 0


    --------------------------------------

    (num_1 > 10) || (num_2 > 10)? 1

    (num_1 > 10) || (num_2 > 100)? 1

    (num_1 > 100) || (num_2 > 10)? 1

    (num_1 > 100) || (num_2 > 100)? 0


    --------------------------------------

    (num_1 >10)? 1

    !(num_1 >10)? 0

    (num_1 > 10) && (num_2 > 10)? 1

    !((num_1 > 10) && (num_2 > 10))? 0

    (num_1 > 100) || (num_2 > 100)? 0

    !((num_1 > 100) || (num_2 > 100))? 1
*/