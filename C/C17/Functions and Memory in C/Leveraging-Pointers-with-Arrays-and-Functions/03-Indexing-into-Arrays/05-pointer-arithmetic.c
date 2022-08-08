#include <stdlib.h>
#include <stdio.h>

int main()
{
    char char_array[] = {'A', 'B', 'C', 'D', 'E'};

    char *arr_ptr = &char_array[2];

    printf("Address: %p \t Character: %c \n", arr_ptr, *arr_ptr);
    printf("-----------Decrement pointer\n");

    arr_ptr--;
    printf("Address: %p \t Character: %c \n", arr_ptr, *arr_ptr);
    printf("-----------Increment pointer by 2\n");

    arr_ptr += 2;
    printf("Address: %p \t Character: %c \n", arr_ptr, *arr_ptr);

    return EXIT_SUCCESS;
}

/* OUTPUT
    Address: 0x7ffdb77cdca5 	        Character: C
    -----------Decrement pointer
    Address: 0x7ffdb77cdca4 	        Character: B
    -----------Increment pointer by 2
    Address: 0x7ffdb77cdca6 	        Character: D
*/