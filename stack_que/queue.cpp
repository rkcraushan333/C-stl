#include <iostream>
#include <queue>
using namespace std;
int main()
{
    queue<int> q;
    for (int i = 1; i < 6; i++)
    {
        q.push(i);
    }
    cout << q.empty() << endl;
    for (int i = 0; i < 5; i++)
    {
        cout<<q.front()<<" ";
        q.pop();
    }
    
    cout << "\n"
         << q.empty() << endl;

    return 0;
}