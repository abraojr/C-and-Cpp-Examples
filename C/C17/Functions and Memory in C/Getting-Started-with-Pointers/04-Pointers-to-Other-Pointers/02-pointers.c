#include <stdlib.h>
#include <stdio.h>

int main()
{
    int num = 221;
    int *num_ptr = &num;
    int *another_ptr = num_ptr;

    printf("---------------ADDRESS---------------\n");
    printf("Address of num is: %p\n", &num);
    printf("Address stored in num_ptr: %p\n", num_ptr);
    printf("Address stored in another_ptr: %p\n", another_ptr);

    printf("\n");

    printf("---------------VALUE---------------\n");
    printf("Value in num is: %d\n", num);
    printf("Value pointed to by num_ptr is: %d\n", *num_ptr);
    printf("Value pointed to by another_ptr is: %d\n", *another_ptr);

    return EXIT_SUCCESS;
}

/* OUTPUT
    ---------------ADDRESS---------------
    Address of num is: 0x7ffdb50b4d14
    Address stored in num_ptr: 0x7ffdb50b4d14
    Address stored in another_ptr: 0x7ffdb50b4d14

    ---------------VALUE---------------
    Value in num is: 221
    Value pointed to by num_ptr is: 221
    Value pointed to by another_ptr is: 221
*/