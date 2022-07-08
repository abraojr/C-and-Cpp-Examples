#include "stdio.h"
#include "stdbool.h"

int main()
{
    for (int i = 0; i < 100; i++)
    {
        for (int j = 0; j < 100; j++)
        {
            printf("i: %i, j: %i\n", i, j);
            if (i == 3 && j == 50)
                goto end;
        }
    }
end:
    printf("end\n");

    char c = getchar();
}

/* OUTPUT:
i: 0, j: 0
i: 0, j: 1
i: 0, j: 2
    .
    .
    .
i: 0, j: 97
i: 0, j: 98
i: 0, j: 99
i: 1, j: 0
i: 1, j: 1
i: 1, j: 2
    .
    .
    .
i: 1, j: 97
i: 1, j: 98
i: 1, j: 99
i: 2, j: 0
i: 2, j: 1
i: 2, j: 2
    .
    .
    .
i: 2, j: 97
i: 2, j: 98
i: 2, j: 99
i: 3, j: 0
i: 3, j: 1
i: 3, j: 2
    .
    .
    .
i: 3, j: 47
i: 3, j: 48
i: 3, j: 49
i: 3, j: 50
end
*/