#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main()
{
    char *string_1 = "alice";
    char *string_2 = "Alice";

    int result = strcasecmp(string_1, string_2);

    printf("Compare result: %d\n", result);

    return EXIT_SUCCESS;
}

/* OUTPUT
    Compare result: 0
*/