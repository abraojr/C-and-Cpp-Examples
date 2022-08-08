#include <stdlib.h>
#include <stdio.h>

int main()
{
    double number_array[] = {100.1, 200.2, 300.3, 400.4, 500.5};

    double *arr_ptr = number_array;

    double size_of_array = sizeof(number_array) / sizeof(double);

    printf("ADDRESS \t VALUE \n");
    for (int i = 0; i < size_of_array; i++)
    {
        printf("%p \t %.2lf \n", arr_ptr + i, *(arr_ptr + i));
    }

    return EXIT_SUCCESS;
}

/* OUTPUT
    ADDRESS 	     VALUE
    0x7ffe5ddfe450 	 100.10
    0x7ffe5ddfe458 	 200.20
    0x7ffe5ddfe460 	 300.30
    0x7ffe5ddfe468 	 400.40
    0x7ffe5ddfe470 	 500.50
*/