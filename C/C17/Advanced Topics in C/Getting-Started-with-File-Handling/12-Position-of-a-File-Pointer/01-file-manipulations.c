#include <stdlib.h>
#include <stdio.h>

int main()
{
    FILE *file_ptr = fopen("../quotes-file.txt", "r");

    if (file_ptr == NULL)
    {
        printf("The file could not be opened\n");
        return EXIT_FAILURE;
    }

    printf("Start position of file_ptr: %ld\n", ftell(file_ptr));

    char data_buffer[1048];

    while (fgets(data_buffer, 1048, file_ptr) != NULL)
    {
        printf("%s", data_buffer);
        printf("Current position os file_ptr: %ld\n", ftell(file_ptr));
    }

    fclose(file_ptr);

    return EXIT_SUCCESS;
}

/* OUTPUT
    Start position of file_ptr: 0
    I find that the harder I work, the more luck I seem to have.
    Current position os file_ptr: 62
    -Thomas Jefferson
    Current position os file_ptr: 81
    I never dreamed about success, I worked for it.
    Current position os file_ptr: 130
    -Estee Lauder
    Current position os file_ptr: 145
*/