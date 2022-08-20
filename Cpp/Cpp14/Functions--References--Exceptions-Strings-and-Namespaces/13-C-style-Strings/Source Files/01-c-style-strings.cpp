#include <cstring>
#include <cstdio>
#include <cstdlib>

int main()
{
    const char *s1 = "Hello, World!";
    printf("%s\n", s1);

    char *s2 = strdup(s1);
    strncpy(s2, "Hi, World!", strlen(s1));
    printf("%s\n", s2);

    int len = (strlen(s1) + strlen(s2) + 10);
    char *s3 = (char *)malloc(len * sizeof(char));

    // strncpy(s3, s2, len);
    // strncat(s3, " ", len);
    // strncat(s3, s1, len);

    snprintf(s3, len, "%s %s", s2, s1);

    printf("%s\n", s3);

    free(s3);
    free(s2);

    return 0;
}

/* OUTPUT
    Hello, World!
    Hi, World!
    Hi, World! Hello, World!
*/