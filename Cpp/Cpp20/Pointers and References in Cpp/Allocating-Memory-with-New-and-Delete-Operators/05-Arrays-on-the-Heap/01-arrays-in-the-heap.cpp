#include <iostream>

using std::cout;
using std::endl;

int main()
{
    // Allocate 5 integer values which are not initialized
    int *unit_sales_bellevue = new int[5];

    // Allocate 5 integer values which are all initialized to zero
    int *unit_sales_redmond = new int[5]{};

    /*Allocate 5 integer values, of which the first 3 are initialized
    to specified values, others to 0 */
    int *unit_sales_kirkland = new int[5]{4, 5, 9};

    cout << "Bellevue sales" << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << unit_sales_bellevue[i] << " ";
    }
    cout << endl;

    cout << "Redmond sales" << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << unit_sales_redmond[i] << " ";
    }
    cout << endl;

    cout << "Kirkland sales" << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << unit_sales_kirkland[i] << " ";
    }
    cout << endl;

    delete[] unit_sales_bellevue;
    delete[] unit_sales_redmond;
    delete[] unit_sales_kirkland;

    unit_sales_bellevue = nullptr;
    unit_sales_redmond = nullptr;
    unit_sales_kirkland = nullptr;

    return 0;
}

/* OUTPUT
    Bellevue sales
    0 0 0 0 0
    Redmond sales
    0 0 0 0 0
    Kirkland sales
    4 5 9 0 0
*/