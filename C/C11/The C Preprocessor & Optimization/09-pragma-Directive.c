#include "stdio.h"

#pragma managed(push, off)
int unmanaged()
{
    printf("Unmanaged\n");
    return 1024;
}

#pragma managed(pop)
int main()
{
    printf("Managed: %i\n", unmanaged());

    char c = getchar();
}

/* OUTPUT:
    Unmanaged
    Managed: 1024
*/