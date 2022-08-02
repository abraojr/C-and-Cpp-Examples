#include <stdlib.h>
#include <stdio.h>

void print_os_details(char os_name[], float os_version);

int main()
{
    char name[] = "Mac OS";
    float ver = 10.14;

    print_os_details(name, ver);

    printf("\n");
    return EXIT_SUCCESS;
}

void print_os_details(char name[], float version)
{
    printf("Operating system name: %s \n", name);
    printf("Operating system version: %.2f \n", version);

    // printf("Operating system name: %s \n", os_name); compile error
    // printf("Operating system version: %.2f \n", os_version); compile error
}

/* OUTPUT
    Operating system name: Mac OS
    Operating system version: 10.14
*/