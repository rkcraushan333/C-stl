#include <iostream>
#include <vector>
using namespace std;
int main()
{
    //ways to intialize a vector
    vector<int> a;
    vector<int> b(5, 10);
    vector<int> c(b.begin(), b.end());
    vector<int> d{1, 4, 6, 3, 9};

    //ways to iterate
    for (int i = 0; i < b.size(); i++)
    {
        cout << b[i] << " ";
    }
    cout << "\n";
    for (auto it = c.begin(); it < c.end(); it++)
    {
        cout << *it << " ";
    }
    cout << "\n";
    //for each loop
    for (auto x : d)
    {
        cout << x << " ";
    }
    cout << "\n";

    // other functions
    int n, k;
    cin>>n;
    while (n--)
    {
        cin >> k;
        a.push_back(k);
    }
    for (auto x : a)
    {
        cout << x << " ";
    }
    cout << "\n";
    return 0;
}
