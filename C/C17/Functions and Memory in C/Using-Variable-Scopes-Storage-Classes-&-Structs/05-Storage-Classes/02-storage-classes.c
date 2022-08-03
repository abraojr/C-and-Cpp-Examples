#include <stdlib.h>
#include <stdio.h>

// auto int num_1; illegal storage class on file-scoped variable
// auto int num_2; illegal storage class on file-scoped variable

int main()
{
    {
        auto int num_1;
        auto int num_2;

        printf("Enter num_1: ");
        scanf("%d", &num_1);

        printf("Enter num_2: ");
        scanf("%d", &num_2);

        printf("\nnum_1 + num_2: %d\n\n", num_1 + num_2);
    }

    return EXIT_SUCCESS;
}

/* OUTPUT
    Enter num_1:
    50
    Enter num_2:
    27

    num_1 + num_2: 77
*/