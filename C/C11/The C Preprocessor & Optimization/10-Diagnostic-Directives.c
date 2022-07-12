#include "stdio.h"

int main()
{
    printf("%s %s\n", __DATE__, __TIME__);
    printf("%s %i\n", __FILE__, __LINE__);
    printf("%s %s\n", __FUNCTION__, __TIMESTAMP__);

    char c = getchar();
}

/* OUTPUT:
    Jul 12 2022 15:35:38
    Diagnostic-Directives.c 6
    Diagnostic-Directives Tue Jul 12 15:35:38 2022
*/