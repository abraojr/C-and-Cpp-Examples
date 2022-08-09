#include <stdlib.h>
#include <stdio.h>

void print_array(int *, int);
void square_numbers(int *, int);

int main()
{
    int int_array[] = {1, 2, 3, 4};

    print_array(int_array, 4);

    square_numbers(int_array, 4);

    print_array(int_array, 4);

    return EXIT_SUCCESS;
}

void print_array(int *int_ptr, int length)
{
    printf("ADDRESS \t VALUE \n");
    for (int i = 0; i < length; i++)
    {
        printf("%p \t %d \n", int_ptr + i, *(int_ptr + i));
    }
}

void square_numbers(int *int_ptr, int length)
{
    for (int i = 0; i < length; i++, int_ptr++)
    {
        *int_ptr = (*int_ptr) * (*int_ptr);
    }
}

/* OUTPUT
    ADDRESS 	     VALUE
    0x7ffcc83a8f60 	 1
    0x7ffcc83a8f64 	 2
    0x7ffcc83a8f68 	 3
    0x7ffcc83a8f6c 	 4
    ADDRESS 	     VALUE
    0x7ffcc83a8f60 	 1
    0x7ffcc83a8f64 	 4
    0x7ffcc83a8f68 	 9
    0x7ffcc83a8f6c 	 16
*/