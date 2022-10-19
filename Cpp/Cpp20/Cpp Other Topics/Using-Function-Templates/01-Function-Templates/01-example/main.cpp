#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;

int larger(int a, int b);

double larger(double a, double b);

string larger(string a, string b);

int main()
{
    cout << "Larger of 10 and 23 is: " << larger(10, 23) << endl;

    cout << "Larger of 111 and 76 is: " << larger(111, 76) << endl;

    cout << "Larger of 111.34 and 76.87 is: " << larger(111.34, 76.87) << endl;

    cout << "Larger of 'A' and 'Z' is: " << larger('A', 'Z') << endl;

    cout << "Larger of 'Alice' and 'Zoe' is: " << larger("Alice", "Zoe") << endl;

    return 0;
}

int larger(int a, int b)
{
    cout << "int larger(int a, int b)" << endl;
    return a > b ? a : b;
}

double larger(double a, double b)
{
    cout << "double larger(double a, double b)" << endl;
    return a > b ? a : b;
}

string larger(string a, string b)
{
    cout << "string larger(string a, string b)" << endl;
    return a > b ? a : b;
}

/* OUTPUT
    Larger of 10 and 23 is: int larger(int a, int b)
    23
    Larger of 111 and 76 is: int larger(int a, int b)
    111
    Larger of 111.34 and 76.87 is: double larger(double a, double b)
    111.34
    Larger of 'A' and 'Z' is: int larger(int a, int b)
    90
    Larger of 'Alice' and 'Zoe' is: string larger(string a, string b)
    Zoe
*/