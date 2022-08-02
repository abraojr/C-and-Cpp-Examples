#include <stdlib.h>
#include <stdio.h>

void print_os_details();

int main()
{
    print_os_details();

    // printf("Operating system name (referenced from main()): %s \n", name); compile error
    // printf("Operating system version (referenced from main()): %.2f \n", version); compile error

    printf("\n");
    return EXIT_SUCCESS;
}

void print_os_details()
{
    char name[] = "MacOS";
    float version = 10.14;

    printf("Operating system name: %s \n", name);
    printf("Operating system version: %.2f \n", version);
}

/* OUTPUT
    Operating system name: Mac OS
    Operating system version: 10.14
*/