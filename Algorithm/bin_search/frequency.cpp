#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int arr[] = {20, 30, 40, 40, 40, 50, 100, 1100};
    int n = sizeof(arr) / sizeof(int);
    int key = 40;
    auto up = upper_bound(arr,arr+n,key);
    auto lb = lower_bound(arr,arr+n,key);
    cout<<up-lb;
    return 0;
}