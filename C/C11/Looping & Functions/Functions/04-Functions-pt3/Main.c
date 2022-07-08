#include "stdio.h"
#include "math.h"

double function1(double, double);

int main()
{
    printf("10, 15: %g\n", function1(10, 15));
    printf("-10, 15: %g\n", function1(-10, 15));
    printf("10, 10: %g\n", function1(10, 10));

    char c = getchar();
}

double function1(double value1, double value2)
{
    return sqrt(value1 * value2);
}

/* OUTPUT: *It depends on the C compiler you are using*
    10, 15: 12.2474
    -10, 15: -nan
    10, 10: 10
*/