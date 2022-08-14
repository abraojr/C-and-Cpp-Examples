#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main()
{
    char name[] = "Joanna";
    char state[] = "California";

    char *name_ptr = (char *)malloc(strlen(name) * sizeof(char));
    char *state_ptr = (char *)malloc(strlen(state) * sizeof(char));

    printf("-----------------ADDRESS-----------------\n");
    printf("Address stored in name_ptr is: %p\n", name_ptr);
    printf("Address of name is: %p \n", name);

    printf("Address stored in state_ptr is: %p\n", state_ptr);
    printf("Address of state is: %p \n", state);

    strcpy(name_ptr, name);
    strcpy(state_ptr, state);

    name[0] = 'j';
    state[0] = 'c';

    printf("Value in name: %s\n", name);
    printf("Value referenced by name_ptr: %s\n", name_ptr);
    printf("Value in state: %s\n", state);
    printf("Value referenced by state_ptr: %s\n", state_ptr);

    free(name_ptr);
    free(state_ptr);

    return EXIT_SUCCESS;
}

/* OUTPUT
    -----------------ADDRESS-----------------
    Address stored in name_ptr is: 0x7fa47fd95560
    Address of name is: 0x7fffd60d6fd6
    Address stored in state_ptr is: 0x7fa47fd95580
    Address of state is: 0x7fffd60d6fdd
    Value in name: joanna
    Value referenced by name_ptr: Joanna
    Value in state: california
    Value referenced by state_ptr: California
*/