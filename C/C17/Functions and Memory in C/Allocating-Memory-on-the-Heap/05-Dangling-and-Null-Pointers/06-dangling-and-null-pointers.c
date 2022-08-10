#include <stdlib.h>
#include <stdio.h>

int main()
{
    int *ptr = (int *)malloc(10 * sizeof(int));
    printf("Address of ptr: %p\n", ptr);

    int *cpy_ptr = ptr;
    printf("Address of cpy_ptr: %p\n", cpy_ptr);

    free(ptr);
    printf("freed once!\n");

    free(cpy_ptr);
    printf("freed twice!\n");

    return EXIT_SUCCESS;
}

/* OUTPUT
    Address of ptr: 0x7f328cc8b560
    Address of cpy_ptr: 0x7f328cc8b560
    freed once!
    malloc: ** error for object 0x7f328cc8b560: pointer being freed was not allocated
    malloc: ** set a breakpoint in malloc_error_break to debug
    Abort trap: 6
*/