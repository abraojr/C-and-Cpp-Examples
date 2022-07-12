#include "stdio.h"

int main()
{
    typedef struct Device
    {
        volatile unsigned int item1;
        volatile unsigned long item2;
    } Device;

    Device device = {144, 72};
    Device *dev = &device;

    while (dev->item1 != 0)
    {
        printf("%i\n", dev->item2);
    }

    char c = getchar();
}