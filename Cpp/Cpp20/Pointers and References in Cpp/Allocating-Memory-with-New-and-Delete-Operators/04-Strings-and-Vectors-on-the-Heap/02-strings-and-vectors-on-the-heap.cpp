#include <iostream>
#include <vector>

using std::cout;
using std::endl;
using std::vector;

int main()
{
    vector<float> *empty_vector{new vector<float>{}};
    vector<float> *gpas_vector{new vector<float>{3.4f, 2.3f, 3.9f, 3.2f}};

    cout << "Is empty_vector empty?: " << std::boolalpha << empty_vector->empty() << endl;
    cout << "Is gpas_vector empty?: " << std::boolalpha << gpas_vector->empty() << endl;

    for (auto gpa : *gpas_vector)
    {
        cout << gpa << endl;
    }

    delete empty_vector;
    delete gpas_vector;

    empty_vector = nullptr;
    gpas_vector = nullptr;

    return 0;
}

/* OUTPUT
    Is empty_vector empty?: true
    Is gpas_vector empty?: false
    3.4
    2.3
    3.9
    3.2
*/