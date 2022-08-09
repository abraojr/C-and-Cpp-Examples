#include <stdlib.h>
#include <stdio.h>

int main()
{
    int some_uninitialized_var;
    int *some_ptr = &some_uninitialized_var;

    int *another_ptr = (int *)malloc(sizeof(int));

    printf("-----------------ADDRESS-----------------\n");
    printf("Address pointed to by some_ptr is: %p\n", some_ptr);
    printf("Address pointed to by another_ptr is: %p\n", another_ptr);

    printf("-----------------VALUE-----------------\n");
    printf("Value referenced by some_ptr: %d\n", *some_ptr);
    printf("Value referenced by another_ptr: %d\n", *another_ptr);

    return EXIT_SUCCESS;
}

/* OUTPUT
    -----------------ADDRESS-----------------
    Address pointed to by some_ptr is: 0x7ffd1caaf594
    Address pointed to by another_ptr is: 0x7f205f871560
    -----------------VALUE-----------------
    Value referenced by some_ptr: 32765
    Value referenced by another_ptr: 1602678264
*/