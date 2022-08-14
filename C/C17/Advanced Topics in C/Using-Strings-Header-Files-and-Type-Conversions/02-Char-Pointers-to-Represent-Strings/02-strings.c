#include <stdlib.h>
#include <stdio.h>

int main()
{
    char *company_name = "Microsoft";

    int i = 0;

    while (company_name[i] != '\0')
    {
        printf("%c", company_name[i]);
        i++;
    }

    return EXIT_SUCCESS;
}

/* OUTPUT
    Microsoft
*/