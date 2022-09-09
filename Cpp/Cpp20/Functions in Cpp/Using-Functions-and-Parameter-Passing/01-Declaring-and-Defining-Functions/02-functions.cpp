#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;

void print_hello();
void print_goodbye();
void print_greeting(string name);
string get_greeting(string);

int main()
{
    cout << "-------------Invoking print_hello-------------" << endl;
    print_hello();

    cout << "-------------Invoking print_goodbye-------------" << endl;
    print_goodbye();

    cout << "-------------Invoking print_greeting-------------" << endl;
    print_greeting("Donald Duck");

    cout << "-------------Invoking get_greeting-------------" << endl;
    string greeting = get_greeting("Mickey Mouse");
    cout << "Return value from get_greeting: " << greeting << endl;

    return 0;
}

void print_hello()
{
    cout << "Hello!" << endl;
}

void print_goodbye()
{
    cout << "Goodbye!" << endl;

    return;
}

void print_greeting(string name)
{
    cout << "Howdy " << name << endl;
}

string get_greeting(string name)
{
    return "How do you do? " + name;
}

/* OUTPUT
    -------------Invoking print_hello-------------
    Hello!
    -------------Invoking print_goodbye-------------
    Goodbye!
    -------------Invoking print_greeting-------------
    Howdy Donald Duck
    -------------Invoking get_greeting-------------
    Return value from get_greeting: How do you do? Mickey Mouse
*/