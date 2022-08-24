#include <iostream>
#include <map>
#include <string>
#include <utility>

using namespace std::string_literals;
using std::cout;
using std::make_pair;
using std::map;
using std::string;

int main()
{
    // 1. create map
    map<int, string> port{
        {80, "HTTP"},
        {443, "HTTPS"},
        {22, "SSH"}};

    // 2. insert
    port[993] = "IMAP"s;
    port.insert(make_pair(25, "SMTP"));

    // 3. access
    cout << "port[80]: " << port[80] << "\n";

    // 4. iterate
    for (const auto &s : port)
    {
        cout << s.first << ": " << s.second << "\n";
    }
    cout << "\n";

    return 0;
}

/* OUTPUT
    port[80]: HTTP
    22: SSH
    25: SMTP
    80: HTTP
    443: HTTPS
    993: IMAP
*/