#include "stdio.h"

int main()
{
    const auto int i = 0;
    volatile register float f = 0.0;
    const static double d = 0.0;
    volatile extern char *s;

    const int *a = 5;
    int b = 6;
    a = &b;

    char c = getchar();
}