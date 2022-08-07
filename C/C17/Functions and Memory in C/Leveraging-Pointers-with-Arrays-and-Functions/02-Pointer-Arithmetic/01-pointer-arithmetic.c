#include <stdlib.h>
#include <stdio.h>

int main()
{
    int number_array[] = {100, 200, 300, 400, 500};

    int size_of_array = sizeof(number_array) / sizeof(int);

    printf("ADDRESS \t VALUE \n");
    for (int i = 0; i < size_of_array; i++)
    {
        printf("%p \t %d \n", &number_array[i], number_array[i]);
    }

    return EXIT_SUCCESS;
}

/* OUTPUT
    ADDRESS 	    VALUE
    0x7ffd6f01cc60 	 100
    0x7ffd6f01cc64 	 200
    0x7ffd6f01cc68 	 300
    0x7ffd6f01cc6c 	 400
    0x7ffd6f01cc70 	 500
*/