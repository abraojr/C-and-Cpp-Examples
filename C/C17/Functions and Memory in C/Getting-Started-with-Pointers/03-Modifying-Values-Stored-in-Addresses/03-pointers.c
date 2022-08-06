#include <stdlib.h>
#include <stdio.h>

int main()
{
    char ch = 'A';
    int num = 45;
    float flt_num = 67.098;
    double dbl_num = 23.3232332;

    char *ch_ptr = &ch;
    int *num_ptr = &num;
    float *flt_num_ptr = &flt_num;
    double *dbl_num_ptr = &dbl_num;

    printf("---------------ORIGINAL VALUE---------------\n");
    printf("Value of ch is: %c\n", *ch_ptr);
    printf("Value of num is: %d\n", *num_ptr);
    printf("Value of flt_num is: %f\n", *flt_num_ptr);
    printf("Value of dbl_num is: %lf\n", *dbl_num_ptr);

    printf("\n");

    *ch_ptr = 'Z';
    *num_ptr += 10000;
    *flt_num_ptr /= 2.3;
    *dbl_num_ptr -= 25.6;

    printf("---------------UPDATE VALUE---------------\n");
    printf("Value of ch is: %c\n", *ch_ptr);
    printf("Value of num is: %d\n", *num_ptr);
    printf("Value of flt_num is: %f\n", *flt_num_ptr);
    printf("Value of dbl_num is: %lf\n", *dbl_num_ptr);

    return EXIT_SUCCESS;
}

/* OUTPUT
    ---------------ORIGINAL VALUE---------------
    Value of ch is: A
    Value of num is: 45
    Value of flt_num is: 67.098000
    Value of dbl_num is: 23.323233

    ---------------UPDATE VALUE---------------
    Value of ch is: Z
    Value of num is: 10045
    Value of flt_num is: 29.173044
    Value of dbl_num is: -2.276767
*/