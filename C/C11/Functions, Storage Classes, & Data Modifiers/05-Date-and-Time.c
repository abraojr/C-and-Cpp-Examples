#include "stdio.h"
#include "time.h"

int main(int argc, char *argv[])
{
    time_t t = time(NULL);
    printf("%s\n", ctime(&t));

    struct tm *time;
    time = localtime(&t);
    printf("%s\n", asctime(time));

    char c = getchar();
}

/* OUTPUT:
    Tue Jul 12 01:27:39 2022

    Tue Jul 12 01:27:39 2022
*/