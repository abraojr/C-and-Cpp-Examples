#include <stdlib.h>
#include <stdio.h>

int main()
{

    float main_var = 10.5;

    {
        printf("main_var (defined in main()): %.2f\n", main_var);

        main_var = 111.1;

        printf("\n");

        printf("Redefined variable main_var_1: %.2f\n", main_var);
    }

    printf("\n");

    printf("Original definition in main() main_var_1: %.2f\n", main_var);

    return EXIT_SUCCESS;
}

/* OUTPUT
    main_var (defined in main()): 10.50

    Redefined variable main_var_1: 111.10

    Original definition in main() main_var_1: 111.10
*/