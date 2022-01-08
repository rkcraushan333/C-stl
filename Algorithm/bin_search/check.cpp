#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int arr[] = {20, 30, 40, 40, 40, 50, 100, 1100};
    int n = sizeof(arr) / sizeof(int);
    int key = 50;
    bool check = binary_search(arr, arr + n, key);
    if (check)
    {
        cout << "Present";
    }
    else
    {
        cout << "not present";
    }

    return 0;
}