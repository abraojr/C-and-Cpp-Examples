#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>

int main()
{
    int a;
    int b;

    printf("Please enter a: ");
    scanf("%d", &a);

    printf("Please enter b: ");
    scanf("%d", &b);

    bool a_greater_than_b = a > b;

    printf("a greater than b? %s\n", a_greater_than_b == true ? "true" : "false");

    return EXIT_SUCCESS;
}

/* OUTPUT
    Please enter a:
    12
    Please enter b:
    5
    a greater than b? true
*/