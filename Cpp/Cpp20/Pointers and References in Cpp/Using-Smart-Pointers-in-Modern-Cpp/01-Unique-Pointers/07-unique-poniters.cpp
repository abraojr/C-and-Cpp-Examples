#include <iostream>
#include <memory>

using std::cout;
using std::endl;
using std::make_unique;
using std::unique_ptr;

int main()
{
    const int size = 5;

    unique_ptr<int[]> unit_sales_redmond{make_unique<int[]>(size)};

    for (int i = 0; i < size; i++)
    {
        unit_sales_redmond[i] = 2 * (i + 7);
    }

    for (int i = 0; i < size; i++)
    {
        cout << unit_sales_redmond[i] << endl;
    }

    return 0;
}

/* OUTPUT
    14
    16
    18
    20
    22
*/