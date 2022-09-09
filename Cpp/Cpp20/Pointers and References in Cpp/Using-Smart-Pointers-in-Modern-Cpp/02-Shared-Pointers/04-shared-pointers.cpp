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
    shared_ptr<Person> doug_ptr{make_shared<Person>("Doug")};

    shared_ptr<Person> person_ptr_1 = nullptr;
    shared_ptr<Person> person_ptr_2 = nullptr;

    person_ptr_1 = nina_ptr;
    cout << "person_ptr_1: " << person_ptr_1->get_name() << endl;

    person_ptr_2 = doug_ptr;
    cout << "person_ptr_2: " << person_ptr_2->get_name() << endl;

    person_ptr_2 = nina_ptr;
    cout << "person_ptr_2 (after reassignment): " << person_ptr_2->get_name() << endl;

    person_ptr_1 = nullptr;
    person_ptr_2 = nullptr;

    return 0;
}

/* OUTPUT
    Constructing person Nina
    Constructing person Doug
    person_ptr_1: Nina
    person_ptr_2: Doug
    person_ptr_2 (after reassignment): Nina
    Destructing person Doug
    Destructing person Nina
*/