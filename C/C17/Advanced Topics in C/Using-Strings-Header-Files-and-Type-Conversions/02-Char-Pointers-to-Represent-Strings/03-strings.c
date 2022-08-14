#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main()
{
    char *company_name = "Microsoft";

    int string_length = strlen(company_name);

    printf("String length is: %d\n", string_length);

    printf("ADDRESS \t VALUE \n");
    for (int i = 0; i < string_length; i++)
    {
        printf("%p \t %c \n", &company_name[i], company_name[i]);
    }

    return EXIT_SUCCESS;
}

/* OUTPUT
    String length is: 9
    ADDRESS 	     VALUE
    0x561c95cbf000 	 M
    0x561c95cbf001 	 i
    0x561c95cbf002 	 c
    0x561c95cbf003 	 r
    0x561c95cbf004 	 o
    0x561c95cbf005 	 s
    0x561c95cbf006 	 o
    0x561c95cbf007 	 f
    0x561c95cbf008 	 t
*/