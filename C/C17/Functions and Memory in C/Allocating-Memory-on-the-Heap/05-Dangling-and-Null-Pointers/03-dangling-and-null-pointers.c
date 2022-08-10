#include <stdlib.h>
#include <stdio.h>

int main()
{
    char *ptr;

    {
        char name[10] = "Alice";
        ptr = name;
    }

    printf("(Security risk, accessing deallocated memory!) Name: %s\n", ptr);

    return EXIT_SUCCESS;
}

/* OUTPUT
    (Security risk, accessing deallocated memory!) Name: Alice
*/