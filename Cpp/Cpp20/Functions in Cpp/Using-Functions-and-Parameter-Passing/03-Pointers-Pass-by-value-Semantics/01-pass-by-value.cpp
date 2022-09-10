#include <iostream>

using std::cout;
using std::endl;

void update_revenue(double *revenue_ptr);

int main()
{
    double bellevue_store_revenue = 100034.45;

    double *revenue_ptr = &bellevue_store_revenue;

    cout << "Bellevue revenue before update: " << bellevue_store_revenue << endl;

    update_revenue(revenue_ptr);

    cout << "Bellevue revenue after update: " << bellevue_store_revenue << endl;

    return 0;
}

void update_revenue(double *revenue_ptr)
{
    cout << "In update_revenue" << endl;

    *revenue_ptr = 1.1 * (*revenue_ptr);
}

/* OUTPUT
    Bellevue revenue before update: 100034
    In update_revenue
    Bellevue revenue after update: 110038
*/