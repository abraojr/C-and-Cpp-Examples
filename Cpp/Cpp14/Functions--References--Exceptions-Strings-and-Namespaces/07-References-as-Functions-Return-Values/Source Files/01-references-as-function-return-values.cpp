#include <iostream>

using std::cout;

int g_array[3] = {0, 1, 2};

int &elementRef(int i)
{
    return g_array[i];
}

int &badRef(int i)
{
    int local_array[] = {10, 20, 30};

    return local_array[i];
}

void output_array()
{
    for (int i : g_array)
        cout << i << " ";
    cout << "\n";
}

int main()
{
    output_array();

    int v = elementRef(1);
    elementRef(2) = 10;
    output_array();
    v = 555;
    output_array();

    // bad form!
    badRef(1) = 5;
    int w = badRef(1);
    cout << w << "\n";

    return 0;
}

/* OUTPUT
    0 1 2
    0 1 10
    0 1 10
    20
*/