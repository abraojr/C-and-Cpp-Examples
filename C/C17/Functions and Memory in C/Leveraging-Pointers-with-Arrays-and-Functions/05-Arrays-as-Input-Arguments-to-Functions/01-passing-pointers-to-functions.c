#include <stdlib.h>
#include <stdio.h>

void print_array(char *, int);

int main()
{
    char char_array[] = {'A', 'B', 'C', 'D', 'E'};

    print_array(char_array, 5);

    return EXIT_SUCCESS;
}

void print_array(char *char_ptr, int length)
{
    printf("ADDRESS \t VALUE \n");
    for (int i = 0; i < length; i++)
    {
        printf("%p \t %c \n", char_ptr + i, *(char_ptr + i));
    }
}

/* OUTPUT
    ADDRESS 	     VALUE
    0x7fff9846c1f3 	 A
    0x7fff9846c1f4 	 B
    0x7fff9846c1f5 	 C
    0x7fff9846c1f6 	 D
    0x7fff9846c1f7 	 E
*/