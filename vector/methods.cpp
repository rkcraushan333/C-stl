#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> v;
    //using reverse function (to avoid doubling)
    int n;
    cin >> n;
    while (n--)
    {
        int k;
        cin >> k;
        v.push_back(k);
    }
    // inserting n at particular position
    v.insert(v.begin() + 2, 4, 12);
    v.erase(v.begin() + 3, v.begin() + 5);
    for (auto a : v)
        cout << a << " ";

    cout << "\n";
    v.front();
    cout << "\n";
    v.back();
    cout << "\n";
    return 0;
}