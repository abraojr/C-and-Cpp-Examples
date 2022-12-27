#include <iostream>

using std::cout;
using std::endl;
using std::string;

int main()
{
    auto print_hello = []()
    {
        cout << "Hello lambdas!" << endl;
    };

    print_hello();

    auto print_message = [](string message) -> void
    {
        cout << message << endl;
    };

    print_message("Lambdas can accept input arguments!");

    auto convert_to_uppercase = [](string message) -> string
    {
        string uppercasee_message;
        for (const char &ch : message)
        {
            uppercasee_message += ::toupper(ch);
        }
        return uppercasee_message;
    };

    string uppercase_message = convert_to_uppercase("Lambdas can accept input arguments and also values!");

    print_message(uppercase_message);

    return 0;
}

/* OUTPUT
    Hello lambdas!
    Lambdas can accept input arguments!
    LAMBDAS CAN ACCEPT INPUT ARGUMENTS AND ALSO VALUES!
*/