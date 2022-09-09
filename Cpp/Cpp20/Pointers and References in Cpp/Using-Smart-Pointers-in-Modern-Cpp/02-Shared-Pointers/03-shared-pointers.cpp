#include <iostream>
#include <memory>
#include <string>

using std::cout;
using std::endl;
using std::make_shared;
using std::shared_ptr;
using std::string;

class Person
{

private:
    string name;

public:
    Person()
    {
        cout << "Constructing person" << endl;
    }

    Person(string n) : name(n)
    {
        cout << "Constructing person " << name << endl;
    }

    string get_name() { return name; }

    void set_name(string n) { name = n; }

    ~Person()
    {
        cout << "Destructing person " << name << endl;
    }
};

int main()
{
    shared_ptr<Person> nina_ptr{make_shared<Person>("Nina")};
    auto nina_ptr_copy = nina_ptr;

    cout << "Original: " << nina_ptr->get_name() << endl;
    cout << "Copy: " << nina_ptr_copy->get_name() << endl;
    cout << "------------------" << endl;

    cout << "Update name" << endl;
    nina_ptr->set_name("Nina Tang");

    cout << "------------------" << endl;
    cout << "Original (after update): " << nina_ptr->get_name() << endl;
    cout << "Copy (after update): " << nina_ptr_copy->get_name() << endl;

    return 0;
}

/* OUTPUT
    Constructing person Nina
    Original: Nina
    Copy: Nina
    ------------------
    Update name
    ------------------
    Original (after update): Nina Tang
    Copy (after update): Nina Tang
    Destructing person Nina Tang
*/