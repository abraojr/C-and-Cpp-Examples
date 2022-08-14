#include <stdlib.h>
#include <stdio.h>

int main()
{
    char *company_name = "Microsoft";

    printf("ADDRESS \t VALUE \n");
    int i = 0;

    while (*(company_name + i) != '\0')
    {
        printf("%p \t %c \n", company_name + i, *(company_name + i));
        i++;
    }

    return EXIT_SUCCESS;
}

/* OUTPUT
    ADDRESS 	     VALUE 
    0x5578c6f20000 	 M 
    0x5578c6f20001 	 i 
    0x5578c6f20002 	 c 
    0x5578c6f20003 	 r 
    0x5578c6f20004 	 o 
    0x5578c6f20005 	 s 
    0x5578c6f20006 	 o 
    0x5578c6f20007 	 f 
    0x5578c6f20008 	 t 
*/