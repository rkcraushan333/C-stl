//Bruteforce approach
#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }
    int k;
    cin >> k;
    for (int i = 0; i < n - 3; i++)
    {
        int m = INT_MIN;
        for (int j = i; j < i + k; j++)
        {
            m = max(m, v[j]);
        }
        cout << m << " ";
    }

    return 0;
}