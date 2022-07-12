#include "stdio.h"
#include "stdlib.h"
#include "time.h"

int main(int argc, char *argv[])
{
    int r;
    for (int i = 0; i < 9; i++)
    {
        r = rand();
        printf("1: %i\n", r);
    }

    srand(rand());
    for (int i = 0; i < 9; i++)
    {
        r = rand();
        printf("2: %i\n", r);
    }

    srand(time);
    for (int i = 0; i < 9; i++)
    {
        r = rand(i);
        printf("3: %i\n", r);
    }

    char c = getchar();
}
