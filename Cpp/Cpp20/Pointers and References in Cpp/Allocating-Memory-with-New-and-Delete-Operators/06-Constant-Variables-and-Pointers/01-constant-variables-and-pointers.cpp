#include <iostream>

using std::cout;
using std::endl;

int main()
{
    float linda_gpa = 3.4f;

    const float megan_gpa = 3.7f;
    float const jill_gpa = 3.9f;

    cout << "Linda's gpa: " << linda_gpa << endl;
    cout << "Megan's gpa: " << megan_gpa << endl;
    cout << "Jill's gpa: " << jill_gpa << endl;

    linda_gpa = 3.6f;

    cout << "Linda's gpa (updated): " << linda_gpa << endl;

    return 0;
}

/* OUTPUT
    Linda's gpa: 3.4
    Megan's gpa: 3.7
    Jill's gpa: 3.9
    Linda's gpa (updated): 3.6
*/