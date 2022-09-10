#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;

void greet(const string &greeting = "How are you?");

int main()
{
    greet();
    greet("Hello, how are you?");
    greet("Good morning!");

    return 0;
}

void greet(const string &greeting)
{
    cout << greeting << endl;
}

/* OUTPUT
    How are you?
    Hello, how are you?
    Good morning!
*/