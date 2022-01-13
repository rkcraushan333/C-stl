//Bruteforce approach
#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int k;
    cin >> k;
    for (int i = 0; i < n - 3; i++)
    {
        int m = INT_MIN;
        for (int j = 0; j < i + k; j++)
        {
            m = max(m, arr[j]);
        }
        cout << m << " ";
    }

    return 0;
}