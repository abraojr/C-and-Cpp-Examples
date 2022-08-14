#include <stdlib.h>
#include <stdio.h>

int main()
{
    char company_name[] = {'M', 'i', 'c', 'r', 'o', 's', 'o', 'f', 't', '\0'};

    printf("%s\n", company_name);

    printf("Size of the above string is: %lu\n", sizeof(company_name));

    return EXIT_SUCCESS;
}

/* OUTPUT
    Microsoft
    Size of the above string is: 10
*/