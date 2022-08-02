#include <stdlib.h>
#include <stdio.h>

int main()
{
    {
        int outer_var = 100;
        {
            int inner_var = 200;

            printf("(inner block) printing outer_var: %d \n", outer_var);
            printf("(inner block) printing inner_var: %d \n", inner_var);
        }
    }

    // printf("(outer block) printing outer_var: %d \n", outer_var) compile error;
    // printf("(outer block) printing inner_var: %d \n", inner_var) compile errpr;

    return EXIT_SUCCESS;
}

/* OUTPUT
    (inner block) printing outer_var: 100
    (inner block) printing inner_var: 200
*/