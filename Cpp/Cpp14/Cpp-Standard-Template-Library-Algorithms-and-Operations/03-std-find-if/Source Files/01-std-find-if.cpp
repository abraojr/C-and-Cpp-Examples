#include <iostream>
#include <algorithm> // find_if
#include <vector>
#include <cctype> // isdigit
#include <string>

using std::cout;
using std::find_if;
using std::isdigit;
using std::string;
using std::vector;

bool isspc(char c)
{
    return c == ' ';
}

// function object: overload operator()
struct is_approx_pi
{
    bool operator()(double d)
    {
        return d >= 3.141 && d < 3.142;
    }
};

int main()
{
    string s = "This is just a test. 1";
    vector<double> si = {1, 2, 3, 3.14159, 5, 6, 100};

    // built-in function (isdigit from cctype)
    auto r = find_if(s.begin(), s.end(), static_cast<int (*)(int)>(isdigit));
    if (r != s.end())
        cout << "r: " << *r << "\n";

    // user-defined function
    auto u = find_if(s.begin(), s.end(), isspc);
    if (u != s.end())
        cout << "u: " << std::boolalpha << ((*u) == ' ') << "\n";

    // lambda expression
    auto v = find_if(s.begin(), s.end(), [](char c)
                     { return c == 'x'; });
    if (v != s.end())
        cout << "v: " << *v << "\n";

    // function object
    auto z = find_if(si.begin(), si.end(), is_approx_pi{});
    if (z != si.end())
        cout << "z: " << *z << "\n";

    return 0;
}

/* OUTPUT
    r: 1
    u: true
    z: 3.14159
*/