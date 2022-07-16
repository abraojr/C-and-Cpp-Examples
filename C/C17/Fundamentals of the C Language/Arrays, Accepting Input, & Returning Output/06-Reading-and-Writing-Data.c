#include <stdlib.h>
#include <stdio.h>

int main()
{
    char name[10];
    char city[12];
    int age;

    fputs("What is your name? ", stdout);
    fgets(name, 10, stdin);

    fgets("Where do you live? ", stdout);
    fgets(city, 12, stdin);

    fgets("How old are you? ", stdout);
    fscanf(city, "%d", &age);

    fputs("Welcome\n", stdout);
    fprintf(stdout, "Hello %d years old %s from %s!\n\n", age, name, city);

    return EXIT_SUCCESS;
}

/* OUTPUT
    What is your name? Abrao
    Where do you live? Sao Paulo
    How old are you? 22
    Welcome
    Hello 22 years old Abrao
    from Sao Paulo
    !
*/