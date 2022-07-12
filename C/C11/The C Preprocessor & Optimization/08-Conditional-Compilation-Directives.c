#include "stdio.h"

#define DISPLAY

int main()
{

#ifdef DISPLAY
    printf("Display is set\n");
#endif

#undef DISPLAY

#ifndef DISPLAY
    printf("Display is no longer set\n");
#endif

    char c = getchar();
}

/* OUTPUT:
    Display is set
    Display is no longer set
*/