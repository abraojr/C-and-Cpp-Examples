#include <stdlib.h>
#include <stdio.h>

int main()
{
    int quantity;
    float price;

    printf("Enter the quantity you purchased:\n");
    scanf("%d", &quantity);

    printf("Enter the price you paid:\n");
    scanf("%f", &price);

    printf("----------------------------------\n");

    printf("Your total bill amount is: %0.2f\n", price * quantity);

    printf("----------------------------------\n");

    int day, month, year;

    printf("Please enter your birth date in this format d/m/y:\n");
    scanf("%d/%d/%d", &day, &month, &year);

    printf("----------------------------------\n");

    printf("Your birthday is on %d/%d/%d\n", day, month, year);

    printf("----------------------------------\n");

    return EXIT_SUCCESS;
}

/* OUTPUT
    Enter the quantity you purchased:
    5
    Enter the price you paid:
    20
    ----------------------------------
    Your total bill amount is: 100.00
    ----------------------------------
    Please enter your birth date in this format d/m/y:
    27/04/2000
    ----------------------------------
    Your birthday is on 27/4/2000
    ----------------------------------
*/