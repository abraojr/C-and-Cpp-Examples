#include <iostream>

using std::cout;
using std::endl;

int main()
{
    int unit_sales = 102;
    int &unit_sales_ref; // compiler error

    unit_sales_ref = unit_sales;

    return 0;
}