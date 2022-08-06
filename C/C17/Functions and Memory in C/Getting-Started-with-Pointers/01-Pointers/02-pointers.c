#include <stdlib.h>
#include <stdio.h>

int main()
{
    int num = 45;
    int *num_ptr = &num;

    printf("---------------ADDRESS---------------\n");
    printf("Address of num is: %p\n", &num);
    printf("Value in num_ptr is: %p\n", num_ptr);

    printf("\n");

    printf("---------------VALUE---------------\n");
    printf("Value in num is: %d\n", num);
    printf("Value pointed to by num_ptr is: %d\n", *num_ptr);

    return EXIT_SUCCESS;
}

/* OUTPUT
    ---------------ADDRESS---------------
    Address of num is: 0x7ffc286cd35c
    Value in num_ptr is: 0x7ffc286cd35c

    ---------------VALUE---------------
    Value in num is: 45
    Value pointed to by num_ptr is: 45
*/