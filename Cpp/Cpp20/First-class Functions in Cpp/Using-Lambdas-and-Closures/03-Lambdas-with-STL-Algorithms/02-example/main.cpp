#include <iostream>
#include <numeric>
#include <vector>

using std::accumulate;
using std::cout;
using std::endl;
using std::string;
using std::vector;

int main()
{
    vector<int> int_vector{102, 116, 117, 99, 34, 27, 55, 88};
    vector<double> double_vector{102.44, 116.93, 117.75, 99.59, 34.222, 27.546};
    vector<string> string_vector{"Hello", "how", "are", "you", "doing?"};

    int integer_sum = 0;

    cout << "--------------Accumulated integers--------------" << endl;
    cout << accumulate(int_vector.begin(), int_vector.end(), integer_sum, [](int sum, int a) { return sum + a; }) << endl;

    double double_sum = 0;

    cout << "--------------Accumulated doubles--------------" << endl;
    cout << accumulate(double_vector.begin(), double_vector.end(), double_sum, [](double sum, double a) { return sum + a; }) << endl;

    string string_concat{};

    cout << "--------------Accumulated strings--------------" << endl;
    cout << accumulate(string_vector.begin(), string_vector.end(), string_concat, [](string concat, string a) { return concat + a; }) << endl;

    return 0;
}

/* OUTPUT
    --------------Accummulated integers--------------
    638
    --------------Accummulated doubles--------------
    498.478
    --------------Accummulated strings--------------
    Hellohowareyoudoing?
*/