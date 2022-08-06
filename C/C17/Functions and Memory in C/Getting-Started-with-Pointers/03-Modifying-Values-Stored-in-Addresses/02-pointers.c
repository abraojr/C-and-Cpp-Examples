#include <stdlib.h>
#include <stdio.h>

int main()
{

    int num = 33;
    int *num_ptr = &num;

    printf("Address of num is: %p\n", &num);
    printf("Address stored in num_ptr is: %p\n", num_ptr);
    printf("Value pointed to by num_ptr is: %d\n", *num_ptr);

    printf("\n");

    printf("------------------UPDATE VALUE------------------\n");
    num *= 100;

    printf("Address of num is (no change): %p\n", &num);
    printf("Address stored in num_ptr is (no change): %p\n", num_ptr);
    printf("Updated value pointed to by num_ptr is: %d\n", *num_ptr);

    return EXIT_SUCCESS;
}

/* OUTPUT
    Address of num is: 0x7ffcede0c91c
    Address stored in num_ptr is: 0x7ffcede0c91c
    Value pointed to by num_ptr is: 33

    ------------------UPDATE VALUE------------------
    Address of num is (no change): 0x7ffcede0c91c
    Address stored in num_ptr is (no change): 0x7ffcede0c91c
    Updated value pointed to by num_ptr is: 3300
*/