#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int arr[] = {2, 7, 8, 13, 5, 34};
    int n = sizeof(arr) / sizeof(int);
    int key = 5;
    auto it = find(arr, arr + n, key);
    int index = it - arr;
    if (index == n)
    {
        cout << "Not found" << endl;
    }
    else
    {
        cout << "Found at index:" << index << endl;
    }

    return 0;
}
