#include <iostream>

using std::cout;
using std::endl;

int find_max(int *arr, size_t n)
{
    int max = *arr;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }

    return max;
}

float find_max(float *arr, size_t n)
{
    float max = *arr;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }

    return max;
}

int main()
{
    int int_arr[]{2, 4, 6, 1, 8, 89, 33};
    float float_arr[]{2.4f, 4.3f, 6.5f, 1.1f, 8.4f, 23.4f, 3.5f};

    cout << "Maximum int value: " << find_max(int_arr, 7) << endl;
    cout << "Maximum float value: " << find_max(float_arr, 7) << endl;

    return 0;
}

/* OUTPUT
    Maximum int value: 89
    Maximum float value: 23.4
*/