#include "stdio.h"

int main()
{
    int i1 = 123;
    float f1 = 456.789F;
    char *s1 = "string";

    void *v = s1;
    printf("%s\n", v);
    v = &i1;
    printf("%i\n", *(int *)v);
    v = &f1;
    printf("%f\n", *(float *)v);

    char c = getchar();
}

/* OUTPUT:
    string
    123
    456.789001
*/