#include <iostream>

using std::cout;
using std::endl;

int main()
{
    const int num_students = 5;
    float student_scores[num_students]{2.3, 4.1, 7.9, 8.2, 6.4};

    for (int i = 0; i < 5; i++)
    {
        cout << "student_score at index " << i << " = " << student_scores[i] << endl;
    }
}

/* OUTPUT
    student_score at index 0 = 2.3
    student_score at index 1 = 4.1
    student_score at index 2 = 7.9
    student_score at index 3 = 8.2
    student_score at index 4 = 6.4
*/