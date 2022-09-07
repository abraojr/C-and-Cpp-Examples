#include <iostream>

using std::cout;
using std::endl;

int main()
{
    const float linda_gpa = 3.4f;
    float const *gpa_ptr = &linda_gpa;

    cout << "gpa_ptr (Linda): " << gpa_ptr << endl;
    cout << "gpa_ptr value (Linda): " << *gpa_ptr << endl;

    const float megan_gpa = 3.7f;

    cout << "-------Updated pointer (this is allowed)-------" << endl;
    gpa_ptr = &megan_gpa;
    cout << "gpa_ptr (Megan): " << gpa_ptr << endl;
    cout << "gpa_ptr value (Megan): " << *gpa_ptr << endl;

    cout << "Linda gpa (no change): " << linda_gpa << endl;

    return 0;
}

/* OUTPUT
    gpa_ptr (Linda): 0x505318
    gpa_ptr value (Linda): 3.4
    -------Updated pointer (this is allowed)-------
    gpa_ptr (Megan): 0x505310
    gpa_ptr value (Megan): 3.7
    Linda gpa (no change): 3.4
*/