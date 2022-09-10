#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;

void greet(string greeting = "Howdy")
{
    cout << greeting << endl;
}

int main()
{
    greet();
    greet("Hello, how are you?");
    greet("Good morning!");

    return 0;
}

/* OUTPUT
    Howdy
    Hello, how are you?
    Good morning!
*/