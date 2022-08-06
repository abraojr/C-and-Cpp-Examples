#include <stdlib.h>
#include <stdio.h>

int main()
{

    int num = 33;
    int *num_ptr = &num;

    printf("Original value in num is: %d\n", num);
    printf("Original value pointed to by num_ptr is: %d\n", *num_ptr);

    printf("\n");

    printf("------------------UPDATE VALUE------------------\n");
    num *= 100;

    printf("Updated value in num is: %d\n", num);
    printf("Updated value pointed to by num_ptr is: %d\n", *num_ptr);

    return EXIT_SUCCESS;
}

/* OUTPUT
    Original value in num is: 33
    Original value pointed to by num_ptr is: 33

    ------------------UPDATE VALUE------------------
    Updated value in num is: 3300
    Updated value pointed to by num_ptr is: 3300
*/