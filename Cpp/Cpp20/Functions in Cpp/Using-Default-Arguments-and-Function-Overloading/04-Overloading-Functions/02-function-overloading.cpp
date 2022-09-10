#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;

int add(int num_a, int num_b)
{
    return num_a + num_b;
}

float add(float num_a, float num_b)
{
    return num_a + num_b;
}

string add(string str_a, string str_b)
{
    return str_a + str_b;
}

int main()
{
    cout << "Adding 2 integers: " << add(23, 45) << endl;
    cout << "Adding 2 floats: " << add(11.11f, 22.22f) << endl;
    cout << "Adding 2 strings: " << add("Hello ", "overloading") << endl;

    return 0;
}

/* OUTPUT
    Adding 2 integers: 68
    Adding 2 floats: 33.33
    Adding 2 strings: Hello overloading
*/