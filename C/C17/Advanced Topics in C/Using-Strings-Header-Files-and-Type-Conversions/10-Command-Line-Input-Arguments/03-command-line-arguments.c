#include <stdlib.h>
#include <stdio.h>

int main(int argc, char *argv[])
{

    if (argc < 4)
    {
        printf("Program invocation 'program_name operator operand_1 operand_2\n'");

        return EXIT_FAILURE;
    }

    float result = 0;
    char operator= argv[1][0];
    double operand_1 = atof(argv[2]);
    double operand_2 = atof(argv[3]);

    switch (operator)
    {
        case '+':
            result = operand_1 + operand_2;
            break;
        case '-':
            result = operand_1 - operand_2;
            break;
        case '*':
            result = operand_1 * operand_2;
            break;
        case '/':
            result = operand_1 / operand_2;
            break;
    }

    printf("%.2f %c %.2f = %.2f\n", operand_1, operator, operand_2, result);

    return EXIT_SUCCESS;
}

/* OUTPUT

    ** Passing the following arguments in the command line (+ 23.4 56.7) **
    23.40 + 56.70 = 80.10


    ** Passing the following arguments in the command line (- 23.4 56.7) **
    23.40 - 56.70 = -33.30

    ** Passing the following arguments in the command line ('*' 23.4 56.7) **
    23.40 * 56.70 = 1326.78

    ** Passing the following arguments in the command line (/ 23.4 56.7) **
    23.40 / 56.70 = 0.41
*/