#include "stdio.h"

int main()
{
    int i = 50;

    if (i > 100)
        printf("i > 100\n");
    else if (i < 50)
        printf("i < 50\n");
    else if (i == 50)
    {
        printf("i == 50\n");
        i += 25;
        if (i != 75)
            printf("Hmmm. How did that happen?");
        else
            printf("i == 75 now\n");
    }
    else
        printf("end else\n");

    char c = getchar();
}

/* OUTPUT:
    i == 50
    i == 75 now
*/