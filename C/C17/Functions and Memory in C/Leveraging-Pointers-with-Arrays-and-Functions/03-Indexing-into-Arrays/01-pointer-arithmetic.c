#include <stdlib.h>
#include <stdio.h>

int main()
{
    int number_array[] = {100, 200, 300, 400, 500};

    int *arr_ptr = number_array;

    printf("\nValue in number_array[0] using array: %d\n", number_array[0]);
    printf("Value in number_array[0] using pointer: %d\n", *arr_ptr);

    printf("\nValue in number_array[1] using array: %d\n", number_array[1]);
    printf("Value in number_array[1] using pointer: %d\n", *(arr_ptr + 1));

    printf("\nValue in number_array[2] using array: %d\n", number_array[2]);
    printf("Value in number_array[2] using pointer: %d\n", *(arr_ptr + 2));

    return EXIT_SUCCESS;
}

/* OUTPUT

    Value in number_array[0] using array: 100
    Value in number_array[0] using pointer: 100

    Value in number_array[1] using array: 200
    Value in number_array[1] using pointer: 200

    Value in number_array[2] using array: 300
    Value in number_array[2] using pointer: 300
*/