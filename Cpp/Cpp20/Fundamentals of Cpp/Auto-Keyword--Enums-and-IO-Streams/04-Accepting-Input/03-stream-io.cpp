#include <iostream>

using std::cin;
using std::cout;
using std::endl;
using std::getline;
using std::string;

int main()
{
    string name, city;

    cout << "What's your name? ";
    getline(cin, name);

    cout << "Where do you live? ";
    getline(cin, city);

    cout << "Hello " << name << " from " << city << "!" << endl;

    return 0;
}

/* OUTPUT
    What's your name?
    Abrão Junior
    Where do you live?
    São Paulo
    Hello Abrão Junior from São Paulo!
*/