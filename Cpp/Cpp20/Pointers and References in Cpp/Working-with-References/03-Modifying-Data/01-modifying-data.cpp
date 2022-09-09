#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;

struct Person
{
    string name;

    Person(string n) : name(n) {}
};

int main()
{
    int unit_sales = 102;
    int &unit_sales_ref = unit_sales;

    float gpa = 3.2f;
    float &gpa_ref = gpa;

    string name = "Della";
    string &name_ref = name;

    Person person("Perry");
    Person &person_ref = person;

    unit_sales_ref++;

    gpa = gpa + 0.3;

    name = "Della Street";

    person.name[0] = 'p';

    return 0;
}