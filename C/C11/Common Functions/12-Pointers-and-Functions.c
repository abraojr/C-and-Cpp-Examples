#include "stdio.h"
#include "math.h"

double *SquareRoot(double *);

int main()
{
    double d1 = 1234.5678;
    double d2 = 8765.4321;
    double rd1 = *SquareRoot(&d1);
    double rd2 = *SquareRoot(&d2);

    printf("%lf %lf\n", rd1, rd2);

    char c = getchar();
}

double *SquareRoot(double *d)
{
    double val = sqrt(*d);

    return &val;
}

/* OUTPUT:
    35.136417 93.623886
*/