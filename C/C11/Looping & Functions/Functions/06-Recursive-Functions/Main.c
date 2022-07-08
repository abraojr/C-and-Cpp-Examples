#include "stdio.h"

int function1(short);

int main()
{
    for (int i = 1; i < 10; i++)
        printf("Recursive Factorial %i: %i\n", i, function1(i));

    for (int i = 1; i < 10; i++)
    {
        long long result = 1;

        for (int j = i; j > 1; j--)
        {
            result *= j;
        }

        printf("Loop Factorial %i: %i\n", i, result);
    }

    char c = getchar();
}

int function1(short factorial)
{
    if (factorial <= 1)
        return 1;
    else
        return factorial * function1(factorial - 1);
}

/* OUTPUT:
    Recursive Factorial 1: 1
    Recursive Factorial 2: 2
    Recursive Factorial 3: 6
    Recursive Factorial 4: 24
    Recursive Factorial 5: 120
    Recursive Factorial 6: 720
    Recursive Factorial 7: 5040
    Recursive Factorial 8: 40320
    Recursive Factorial 9: 362880
    Loop Factorial 1: 1
    Loop Factorial 2: 2
    Loop Factorial 3: 6
    Loop Factorial 4: 24
    Loop Factorial 5: 120
    Loop Factorial 6: 720
    Loop Factorial 7: 5040
    Loop Factorial 8: 40320
    Loop Factorial 9: 362880
*/