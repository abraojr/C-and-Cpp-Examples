#include <stdlib.h>
#include <stdio.h>

//#define ADD(x, y) x + y

void perform_add(float a, float b)
{

#ifdef ADD
    printf("Sum = %.2f\n", ADD(a, b));
#endif

#ifndef ADD
    printf("ADD macro not defined\n");
#endif
}

int main()
{
    printf("Performing first add\n");
    perform_add(5.6, 2.1);

    printf("\nPerforming second add\n");
    perform_add(10.3, 7.9);

    return EXIT_SUCCESS;
}

/*
    Performing first add
    Sum = 7.70

    Performing second add
    Sum = 18.20

    ** THIS WILL BE PRINTED IF WE COMMENT OUT LINE 4 **

    Performing first add
    ADD macro not defined

    Performing second add
    ADD macro not defined
*/