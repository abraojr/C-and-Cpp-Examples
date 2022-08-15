#include <stdlib.h>
#include <stdio.h>

int main(int argc, char *argv[])
{
    printf("Program name: %s\n", argv[0]);

    if (argc == 1)
    {
        printf("No additional command line arguments were passed into this program\n");
    }
    else
    {
        printf("Number of command line arguments: %d\n", argc);

        for (int i = 0; i < argc; i++)
        {
            printf("Argument at index: %d is %s\n", i, argv[i]);
        }
    }

    return EXIT_SUCCESS;
}

/* OUTPUT

    ** When passing no arguments in the command line **
    Program name: ./02-command-line-arguments.c.out
    No additional command line arguments were passed into this program

    ** When passing three arguments in the command line ( some_string 100 200 ) **
    Program name: ./02-command-line-arguments.c.out
    Number of command line arguments: 4
    Argument at index: 0 is ./02-command-line-arguments.c.out
    Argument at index: 1 is some_string
    Argument at index: 2 is 100
    Argument at index: 3 is 200
*/