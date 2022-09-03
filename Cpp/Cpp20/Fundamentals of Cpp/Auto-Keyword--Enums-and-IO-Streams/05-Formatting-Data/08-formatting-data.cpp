#include <iostream>
#include <string>
#include <iomanip>

using std::cout;
using std::endl;
using std::string;

int main()
{
     string student_names[] = {"James", "Deborah", "Josephine", "Greg", "Tom"};

     cout << std::setw(10) << std::left << student_names[0]
          << std::setw(10) << std::left << student_names[1] << endl
          << std::setw(10) << std::left << student_names[2]
          << std::setw(10) << std::left << student_names[3] << endl
          << std::setw(10) << std::left << student_names[4] << endl;

     return 0;
}

/* OUTPUT
James     Deborah
Josephine Greg
Tom
*/