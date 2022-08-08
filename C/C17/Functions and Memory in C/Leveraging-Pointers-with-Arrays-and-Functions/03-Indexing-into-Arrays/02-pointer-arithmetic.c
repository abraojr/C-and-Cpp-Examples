#include <stdlib.h>
#include <stdio.h>

int main()
{
    int number_array[] = {100, 200, 300, 400, 500};

    int *arr_ptr = number_array;

    int size_of_array = sizeof(number_array) / sizeof(int);

    printf("ADDRESS \t VALUE \n");
    for (int i = 0; i < size_of_array; i++)
    {
        printf("%p \t %d \n", arr_ptr + i, *(arr_ptr + i));
    }

    return EXIT_SUCCESS;
}

/* OUTPUT
    ADDRESS 	    VALUE 
    0x7ffdb34c70b0 	 100 
    0x7ffdb34c70b4 	 200 
    0x7ffdb34c70b8 	 300 
    0x7ffdb34c70bc 	 400 
    0x7ffdb34c70c0 	 500 
*/