#include <stdlib.h>
#include <stdio.h>

int main()
{
    int int_income = 100000;
    int int_expenses = 67000;

    printf("Initial income: %d \n", int_income);
    printf("Initial expenses: %d \n", int_expenses);

    printf("\n------------------------------------\n\n");

    int My_Income1 = 110000;
    int My_Expenses1 = 75000;

    printf("My_Income1: %d \n", My_Income1);
    printf("My_Expenses1: %d \n", My_Expenses1);

    printf("\n------------------------------------\n\n");

    int _Income1 = 1200000;
    int _Expenses1 = 85000;

    printf("_Income1: %d \n", _Income1);
    printf("_Expenses1: %d \n", _Expenses1);

    printf("\n------------------------------------\n\n");

    /* In these cases there will be compilation errors
    int 123_Income = 1200000;
    int 123_Expenses = 85000;

    int Income-1 = 1200000;
    int Expenses-1 = 85000;
    */

    long long_income = 100000l;
    long long_expenses = 67000L;

    printf("Initial income: %ld \n", long_income);
    printf("Initial expenses: %ld \n", long_expenses);

    printf("\n------------------------------------\n\n");

    long My_Income2 = 110000ul;
    long My_Expenses2 = 75000UL;

    printf("My_Income2: %ld \n", My_Income2);
    printf("My_Expenses2: %ld \n", My_Expenses2);

    printf("\n------------------------------------\n\n");

    return EXIT_SUCCESS;
}

/* OUTPUT
    Initial income: 100000
    Initial expenses: 67000

    ------------------------------------

    My_Income1: 110000
    My_Expenses1: 75000

    ------------------------------------

    _Income1: 1200000
    _Expenses1: 85000

    ------------------------------------

    Initial income: 100000
    Initial expenses: 67000

    ------------------------------------

    My_Income2: 110000
    My_Expenses2: 75000

    ------------------------------------
*/