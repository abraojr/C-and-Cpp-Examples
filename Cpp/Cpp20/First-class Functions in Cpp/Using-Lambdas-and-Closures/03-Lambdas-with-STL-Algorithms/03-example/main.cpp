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

    auto generic_accumulate = [](auto sum, auto a) { return sum + a; };

    int integer_sum = 0;

    cout << "--------------Accumulated integers--------------" << endl;
    cout << accumulate(int_vector.begin(), int_vector.end(), integer_sum, generic_accumulate) << endl;

    double double_sum = 0;

    cout << "--------------Accumulated doubles--------------" << endl;
    cout << accumulate(double_vector.begin(), double_vector.end(), double_sum, generic_accumulate) << endl;

    string string_concat{};

    cout << "--------------Accumulated strings--------------" << endl;
    cout << accumulate(string_vector.begin(), string_vector.end(), string_concat, generic_accumulate) << endl;

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