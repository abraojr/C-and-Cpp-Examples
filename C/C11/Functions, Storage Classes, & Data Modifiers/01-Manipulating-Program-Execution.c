#include "stdio.h"
#include "stdlib.h"
#include "windows.h"

int main(int argc, char *argv[])
{
    printf("Opening this file in Notepad\n");
    system("notepad.exe Manipulating-Program-Execution.c");

    printf("Sleeping for 5 seconds.\n");
    Sleep(5000);
    printf("Done sleeping.\n");

    char c = getchar();
}