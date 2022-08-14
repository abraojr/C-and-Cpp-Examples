#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main()
{
    char name[] = "Joanna";
    char state[] = "California";

    char *name_ptr = name;
    char *state_ptr = state;

    printf("-----------------ADDRESS-----------------\n");
    printf("Address stored in name_ptr is: %p\n", name_ptr);
    printf("Address of name is: %p \n", name);

    printf("Address stored in state_ptr is: %p\n", state_ptr);
    printf("Address of state is: %p \n", state);

    name[0] = 'j';
    state[0] = 'c';

    printf("Value referenced by name_ptr: %s\n", name_ptr);
    printf("Value referenced by state_ptr: %s\n", state_ptr);

    return EXIT_SUCCESS;
}

/* OUTPUT
    -----------------ADDRESS-----------------
    Address stored in name_ptr is: 0x7ffd3c8c6506
    Address of name is: 0x7ffd3c8c6506
    Address stored in state_ptr is: 0x7ffd3c8c650d
    Address of state is: 0x7ffd3c8c650d
    Value referenced by name_ptr: joanna
    Value referenced by state_ptr: california
*/