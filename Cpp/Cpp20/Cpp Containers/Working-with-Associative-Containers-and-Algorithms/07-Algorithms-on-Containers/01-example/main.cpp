#include <algorithm>
#include <iostream>
#include <vector>

using std::cout;
using std::endl;
using std::max_element;
using std::min_element;
using std::vector;

int main()
{
    vector<float> float_vector{11.01, 34.29, 98.82, 55.09, 2.33, 100.56, 67.39};

    vector<float>::iterator it_min = min_element(float_vector.begin(), float_vector.end());
    vector<float>::iterator it_max = max_element(float_vector.begin(), float_vector.end());

    cout << "Minimum: " << *it_min << endl;
    cout << "Maximum: " << *it_max << endl;

    return 0;
}

/* OUTPUT
    Minimum: 2.33
    Maximum: 100.56
*/