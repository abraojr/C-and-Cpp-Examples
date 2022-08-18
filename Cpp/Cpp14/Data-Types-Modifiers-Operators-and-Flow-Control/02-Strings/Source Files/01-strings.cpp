#include <string>

using std::string;
using namespace std::string_literals;

int main()
{
    // character prefixes: u8, L, u, U
    auto a = u8'a';
    auto b = L'b';
    auto c = u'c';
    auto d = U'd';

    // string suffix: s (from std::string_literals)
    auto str = U"xyz"s;

    return 0;
}