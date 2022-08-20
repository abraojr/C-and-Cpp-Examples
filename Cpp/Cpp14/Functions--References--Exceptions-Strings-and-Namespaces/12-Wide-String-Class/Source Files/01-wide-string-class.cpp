#include <iostream>
#include <string>

using std::cout;
using std::string;
using std::wcout;
using std::wstring;
using namespace std::string_literals;

int main()
{
    cout << "sizeof char: " << sizeof(char) << "\n";
    cout << "sizeof wchar_t: " << sizeof(wchar_t) << "\n";

    wstring s1 = L"Hello, World!"s;
    auto s2 = L"Hi, Earth!"s;
    wcout << s1 << "\n";
    wcout << s2 << "\n";

    // size/length
    cout << "size: " << s1.size() << "\n";
    cout << "length: " << s1.length() << "\n";

    return 0;
}

/* OUTPUT
    sizeof char: 1
    sizeof wchar_t: 4
    Hello, World!
    Hi, Earth!
    size: 13
    length: 13
*/