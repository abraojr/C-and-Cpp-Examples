#include <iostream>
#include <memory>
#include <string>

using std::cout;
using std::endl;
using std::make_shared;
using std::shared_ptr;
using std::string;
using std::weak_ptr;

struct Company;

struct Person
{

    string name;
    shared_ptr<Company> company_ptr;

    ~Person()
    {
        cout << "Destructing person " << name << endl;
    }
};

struct Company
{
    string name;
    shared_ptr<Person> person_ptr;

    ~Company()
    {
        cout << "Destructing company " << name << endl;
    }
};

int main()
{
    shared_ptr<Person> nina_ptr{make_shared<Person>()};
    nina_ptr->name = "Nina";

    shared_ptr<Company> company_ptr{make_shared<Company>()};
    company_ptr->name = "Microsoft";

    return 0;
}

/* OUTPUT
    Destructing company Microsoft
    Destructing person Nina
*/