#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main()
{
    char name[] = "Joanna";
    char state[] = "California";

    char *name_state_ptr = (char *)calloc((strlen(name) + strlen(state) + 2), sizeof(char));

    strcat(name_state_ptr, name);
    strcat(name_state_ptr, " ");
    strcat(name_state_ptr, state);

    printf("Value in name: %s\n", name);
    printf("Value in state: %s\n", state);
    printf("Value referenced by name_state_ptr: %s\n", name_state_ptr);

    free(name_state_ptr);

    return EXIT_SUCCESS;
}

/* OUTPUT
    Value in name: Joanna
    Value in state: California
    Value referenced by name_state_ptr: Joanna California
*/