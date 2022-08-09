#include <stdlib.h>
#include <stdio.h>

int main()
{
    int *int_ptr = (int *)malloc(10 * sizeof(int));

    if (int_ptr == NULL)
    {
        printf("Memory not allocated\n");
        return EXIT_FAILURE;
    }

    printf("Size of int_ptr: %lu\n", sizeof(int_ptr));
    printf("Size of value referenced by int_ptr: %lu\n", sizeof(*int_ptr));

    free(int_ptr);

    return EXIT_SUCCESS;
}

/* OUTPUT
    Size of int_ptr: 8
    Size of value referenced by int_ptr: 4
*/