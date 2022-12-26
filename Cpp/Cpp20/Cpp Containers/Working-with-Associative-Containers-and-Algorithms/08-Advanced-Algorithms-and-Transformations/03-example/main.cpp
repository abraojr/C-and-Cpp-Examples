#include <algorithm>
#include <iostream>
#include <random>
#include <vector>

using std::cout;
using std::default_random_engine;
using std::endl;
using std::for_each;
using std::shuffle;
using std::sort;
using std::vector;

void print_nums(const vector<int> nums)
{
    for_each(nums.begin(), nums.end(), [](int num)
             { cout << num << " "; });
    cout << endl;
};

int main()
{
    vector<int> odd_nums{1, 3, 5, 7, 9};
    vector<int> even_nums{2, 4, 6, 8, 10};

    cout << "----------Before shuffle----------" << endl;
    print_nums(odd_nums);
    print_nums(even_nums);

    shuffle(odd_nums.begin(), odd_nums.end(), default_random_engine(123));
    shuffle(even_nums.begin(), even_nums.end(), default_random_engine(123));

    cout << "----------After shuffle----------" << endl;
    print_nums(odd_nums);
    print_nums(even_nums);

    sort(odd_nums.begin(), odd_nums.end());
    sort(even_nums.begin(), even_nums.end());

    cout << "----------After sort----------" << endl;
    print_nums(odd_nums);
    print_nums(even_nums);

    return 0;
};

/* OUTPUT
    ----------Before shuffle----------
    1 3 5 7 9
    2 4 6 8 10
    ----------After shuffle----------
    7 1 3 9 5
    8 2 4 10 6
    ----------After sort----------
    1 3 5 7 9
    2 4 6 8 10
*/