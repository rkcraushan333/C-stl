#include <iostream>
#include <queue>
using namespace std;
int main()
{
    // Min heap
    priority_queue<int, vector<int>, greater<int>> p;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        p.push(x); // o(logn)
    }
    for (int i = 0; i < n; i++)
    {

        cout << p.top() << " "; //0(1)
        p.pop();                // o(logn)
    }

    return 0;
}