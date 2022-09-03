#include <iostream>

using std::cout;
using std::endl;

int main()
{
    float student_scores[5];

    for (int i = 0; i < 5; i++)
    {
        cout << "student_score at index " << i << " = " << student_scores[i] << endl;
    }
}

/* OUTPUT
    student_score at index 0 = 0
    student_score at index 1 = 0
    student_score at index 2 = 0
    student_score at index 3 = 0
    student_score at index 4 = 2.22414e-41
*/