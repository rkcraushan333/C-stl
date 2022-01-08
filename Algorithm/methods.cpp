#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main()
{
    int arr[] = {10, 20, 30, 40, 50};
    int n = sizeof(arr) / sizeof(int);
    //rotate an array
    rotate(arr, arr + 3, arr + n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    //using a vector
    vector<int> v{10, 20, 30, 40, 50};
    //rotate
    rotate(v.begin(), v.begin() + 2, v.end());
    cout << endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
    //next lexicograhic greater element(next_permutation)
    next_permutation(v.begin(), v.end());
    for (int x : v)
        cout << x << " ";
    cout << endl;
    next_permutation(v.begin(), v.end());
    for (int x : v)
        cout << x << " ";
    return 0;
}
