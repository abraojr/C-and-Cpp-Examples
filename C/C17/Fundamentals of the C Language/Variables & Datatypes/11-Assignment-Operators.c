#include <stdlib.h>
#include <stdio.h>

int main()
{
    int num = 50;
    int test_num = 50;

    num += 30;
    test_num = test_num + 30;
    printf("num after adding 30: %d\n\n", num);
    printf("test_num after adding 30: %d\n\n", test_num);

    num -= 10;
    test_num = test_num - 10;
    printf("num after subtracting 10: %d\n\n", num);
    printf("test_num after subtracting 10: %d\n\n", test_num);

    num *= 2;
    test_num = test_num * 2;
    printf("num after multiplying 2: %d\n\n", num);
    printf("test_num after multiplying 2: %d\n\n", test_num);

    num /= 5;
    test_num = test_num / 5;
    printf("num after dividing 5: %d\n\n", num);
    printf("test_num after dividing 5: %d\n\n", test_num);

    num %= 6;
    test_num = test_num % 6;
    printf("num after computing remainder: %d\n\n", num);
    printf("test_num after computing remainder: %d\n\n", test_num);

    printf("\n---------------------------------\n\n");

    num = 50;

    num += 30 / 2;
    printf("num after adding 30 / 2: %d\n\n", num);

    num -= 10 + 2;
    printf("num after subtracting 10 + 2: %d\n\n", num);

    num *= 5 - 2;
    printf("num after multiplying by 5 - 2: %d\n\n", num);

    num /= 2 + 1;
    printf("num after dividing by 2 + 1: %d\n\n", num);

    return EXIT_SUCCESS;
}

/* OUTPUT

    num after adding 30: 80

    test_num after adding 30: 80

    num after subtracting 10: 70

    test_num after subtracting 10: 70

    num after multiplying 2: 140

    test_num after multiplying 2: 140

    num after dividing 5: 28

    test_num after dividing 5: 28

    num after computing remainder: 4

    test_num after computing remainder: 4


    ---------------------------------

    num after adding 30 / 2: 65

    num after subtracting 10 + 2: 53

    num after multiplying by 5 - 2: 159

    num after dividing by 2 + 1: 53
*/