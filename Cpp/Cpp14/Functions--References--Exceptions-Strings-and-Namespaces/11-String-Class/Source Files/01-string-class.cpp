#include <iostream>
#include <string>

using std::cout;
using std::string;
using namespace std::string_literals;

int main()
{
    // string creation
    string s1 = "Hello, World!";
    auto s2 = "Hi, Earth!"s;
    cout << s1 << "\n";
    cout << s2 << "\n";

    // concatenate strings
    const char *sep = " "; // space
    s1 += sep + s2;
    cout << s1 << "\n";

    // find
    cout << "Location of 'Hi' in s1: " << s1.find("Hi") << "\n";

    // substring
    string sub_str = s1.substr(7, 6);
    cout << "s1.substr(7, 6): " << sub_str << "\n";

    // size/length
    cout << "size: " << s1.size() << "\n";
    cout << "length: " << s1.length() << "\n";

    // iterate
    for (auto itr = s1.begin(); itr != s1.end(); ++itr)
    {
        cout << *itr << " ";
    }
    cout << "\n";
    return 0;
}

/* OUTPUT
    Hello, World!
    Hi, Earth!
    Hello, World! Hi, Earth!
    Location of 'Hi' in s1: 14
    s1.substr(7, 6): World!
    size: 24
    length: 24
    H e l l o ,   W o r l d !   H i ,   E a r t h !
*/