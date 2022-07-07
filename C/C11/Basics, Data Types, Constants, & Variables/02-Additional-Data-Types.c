#include "stdio.h"
#include "stdbool.h"

int main()
{
    _Bool test1 = 2 < 5;
    bool test2 = true;
    bool test3 = 0;

    printf("Test1: %s\n", test1 ? "true" : "false");
    printf("Test2: %s\n", test2 ? "true" : "false");
    printf("Test3: %x\n", test3);

    char c = getchar(); // waits for the user to hit enter before exiting
}

/* OUTPUT
    Test1: true
    Test2: true
    Test3: 0
*/