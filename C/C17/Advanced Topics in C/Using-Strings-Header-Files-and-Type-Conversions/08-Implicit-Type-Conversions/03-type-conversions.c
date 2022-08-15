#include <stdlib.h>
#include <stdio.h>

int main()
{
    int num = 10;
    char ch = 'j'; // ASCII value is 106

    printf("sizeof(num): %lu\n", sizeof(num));
    printf("sizeof(ch): %lu\n", sizeof(ch));

    printf("\nImplicit type conversion performed\n\n");

    float float_result = num + ch;

    printf("sizeof(float_result): %lu\n", sizeof(float_result));
    printf("float_result: %.2lf\n", float_result);

    return EXIT_SUCCESS;
}

/* OUTPUT
    sizeof(num): 4
    sizeof(ch): 1

    Implicit type conversion performed

    sizeof(float_result): 4
    float_result: 116.00
*/