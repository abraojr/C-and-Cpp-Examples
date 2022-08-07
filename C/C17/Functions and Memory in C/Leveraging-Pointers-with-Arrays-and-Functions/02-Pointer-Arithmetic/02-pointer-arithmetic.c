#include <stdlib.h>
#include <stdio.h>

int main()
{
    int number_array[] = {100, 200, 300, 400, 500};

    int *arr_ptr = number_array;

    printf("\nAddress of number_array[0] using array: %p\n", &number_array[0]);
    printf("Address of number_array[0] using pointer: %p\n", arr_ptr);

    printf("\nAddress of number_array[1] using array: %p\n", &number_array[1]);
    printf("Address of number_array[1] using pointer: %p\n", arr_ptr + 1);

    printf("\nAddress of number_array[2] using array: %p\n", &number_array[2]);
    printf("Address of number_array[2] using pointer: %p\n", arr_ptr + 2);

    return EXIT_SUCCESS;
}

/* OUTPUT

    Address of number_array[0] using array: 0x7ffdc89afa70
    Address of number_array[0] using pointer: 0x7ffdc89afa70

    Address of number_array[1] using array: 0x7ffdc89afa74
    Address of number_array[1] using pointer: 0x7ffdc89afa74

    Address of number_array[2] using array: 0x7ffdc89afa78
    Address of number_array[2] using pointer: 0x7ffdc89afa78
*/