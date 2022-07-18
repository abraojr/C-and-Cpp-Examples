#include <stdlib.h>
#include <stdio.h>

int main()
{
    int response;

    printf("Hello, pick a country using the numbers below: \n");
    printf("1.China \n2.India \n3.Japan \n4.South Korea \nCountry? :");
    scanf("%d", &response);

    switch (response)
    {
    case 1:
        printf("Say \"Ni hao\" for hello in Chinese\n");
        break; // End of case 1

    case 2:
        printf("Say \"Namaste\" for hello in Hindi\n");
        break; // End of case 2

    case 3:
        printf("Say \"Konnichiwa\" for hello in Japanese\n");
        break; // End of case 3

    case 4:
        printf("Say \"Annyeohghaseyo\" for hello in Korean\n");
        break; // End of case 4

    default:
        printf("Sorry, it seems the language you are looking for is currently not available in our library yet.\n");
        break; // End of default

    } // End of switch

    return EXIT_SUCCESS;
}

/* OUTPUT
    Hello, pick a country using the numbers below:
    1.China
    2.India
    3.Japan
    4.South Korea
    Country? :
    3
    Say "Konnichiwa" for hello in Japanese
*/