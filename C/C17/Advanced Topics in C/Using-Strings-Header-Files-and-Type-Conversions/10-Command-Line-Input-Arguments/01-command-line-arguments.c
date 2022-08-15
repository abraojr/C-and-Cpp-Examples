#include <stdlib.h>
#include <stdio.h>

int main(int argc, char *argv[])
{
    printf("Number of command line arguments: %d\n", argc);
    printf("Command line argument at index 0: %s\n", argv[0]);
    printf("Command line argument at index 1: %s\n", argv[1]);

    return EXIT_SUCCESS;
}

/* OUTPUT
    Number of command line arguments: 1
    Command line argument at index 0: ./01-command-line-arguments.c.out
    Command line argument at index 1: (null)
*/