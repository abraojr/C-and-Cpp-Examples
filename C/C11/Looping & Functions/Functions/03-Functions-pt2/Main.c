#include "stdio.h"

int main()
{
    function1("First Line");
    function1("Second Line");
    function1(" - Not the Same Line", "Second Parameter");
    int i = function1();
    printf("i: %i\n", i);

    char c = getchar();
}

function1(char *output)
{
    printf("%s\n", output);
    return 123;
}

/* OUTPUT: *It depends on the C compiler you are using*
    First Line
    Second Line
    - Not the Same Line
    <null>
    i: 123
*/