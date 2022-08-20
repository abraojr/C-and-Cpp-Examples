#include <cstring>
#include <cstdio>
#include <cstdlib>

int main()
{
    char s1[100];
    int len = sprintf(s1, "%s", "Hello, World!");
    int len2 = sprintf(s1 + len + 1, "%s", "Hi, World!");
    printf("%s\n", s1);
    printf("%s\n", s1 + len + 1);

    char *s2 = (char *)malloc(100 * sizeof(char));

    sprintf(s2, "%s", "Hello World");
    s2[5] = '\0';
    printf("%s\n", s2);
    printf("%s\n", s2 + 6);

    free(s2);

    return 0;
}

/* OUTPUT
    Hello, World!
    Hi, World!
    Hello
    World
*/