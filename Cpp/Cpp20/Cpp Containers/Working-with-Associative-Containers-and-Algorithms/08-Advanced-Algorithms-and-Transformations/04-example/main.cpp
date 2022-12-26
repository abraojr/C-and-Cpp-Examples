#include <algorithm>
#include <iostream>
#include <vector>

using std::cout;
using std::endl;
using std::reverse;
using std::transform;
using std::vector;

void print_nums(const vector<int> nums)
{
    for_each(nums.begin(), nums.end(), [](int num)
             { cout << num << " "; });
    cout << endl;
};

int increment_by_100(int num)
{
    return num + 100;
}

int main()
{
    vector<int> odd_nums{1, 3, 5, 7, 9};
    vector<int> even_nums{2, 4, 6, 8, 10};

    cout << "----------Original----------" << endl;
    print_nums(odd_nums);
    print_nums(even_nums);

    vector<int> odd_nums_copy;
    odd_nums_copy.resize(odd_nums.size());

    vector<int> even_nums_copy;
    even_nums_copy.resize(even_nums.size());

    transform(odd_nums.begin(), odd_nums.end(), odd_nums_copy.begin(), increment_by_100);
    transform(even_nums.begin(), even_nums.end(), even_nums_copy.begin(), increment_by_100);

    cout << "----------After increment----------" << endl;
    print_nums(odd_nums_copy);
    print_nums(even_nums_copy);

    reverse(odd_nums_copy.begin(), odd_nums_copy.end());
    reverse(even_nums_copy.begin(), even_nums_copy.end());

    cout << "----------After reverse----------" << endl;
    print_nums(odd_nums_copy);
    print_nums(even_nums_copy);

    return 0;
};

/* OUTPUT
    ----------Original----------
    1 3 5 7 9
    2 4 6 8 10
    ----------After increment----------
    101 103 105 107 109
    102 104 106 108 110
    ----------After reverse----------
    109 107 105 103 101
    110 108 106 104 102
*/