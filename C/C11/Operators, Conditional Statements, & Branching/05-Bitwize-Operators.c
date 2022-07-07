#include "stdio.h"

int main()
{
    int i = 0xF0F0;
    int j = 0x0F0F;
    int k = 0X0FF0;

    printf("i j AND: %.4x\n", i & j);
    printf("i j OR: %.4x\n", i | j);
    printf("i j XOR: %.4x\n", i ^ j);

    printf("i k AND: %.4x\n", i & k);
    printf("i k OR: %.4x\n", i | k);
    printf("i k XOR: %.4x\n", i ^ k);

    char c = getchar();
}

/* OUTPUT:
    i j AND: 0000
    i j OR: ffff
    i j XOR: ffff
    i k AND: 00f0
    i k OR: fff0
    i k XOR: ff00
*/