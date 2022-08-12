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

    char data_buffer[1048];

    printf("Start position of file_ptr: %ld\n", ftell(file_ptr));

    fgets(data_buffer, 1048, file_ptr);
    printf("%s", data_buffer);

    printf("Current position os file_ptr: %ld\n", ftell(file_ptr));

    printf("Rewind file_ptr to the beginning...\n");
    rewind(file_ptr);

    printf("Rewound file_ptr to the beginning: %ld\n", ftell(file_ptr));

    printf("Back to start position of file_ptr: %ld\n", ftell(file_ptr));

    fgets(data_buffer, 1048, file_ptr);
    printf("%s", data_buffer);

    fclose(file_ptr);

    return EXIT_SUCCESS;
}

/* OUTPUT
    Start position of file_ptr: 0
    I find that the harder I work, the more luck I seem to have.
    Current position os file_ptr: 62
    Rewind file_ptr to the beginning...
    Rewound file_ptr to the beginning: 0
    Back to start position of file_ptr: 0
    I find that the harder I work, the more luck I seem to have.
*/