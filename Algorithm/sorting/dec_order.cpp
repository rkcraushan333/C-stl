//use of comparator function
#include <iostream>
#include <algorithm>
using namespace std;
/*
bool compare(int a,int b){
    if (a>b)
    {
        return true;
    }
    return false;
}
Above and below do the same work
*/
bool compare(int a, int b)
{
    return a > b;
}
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr + n, compare);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}