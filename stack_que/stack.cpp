#include <iostream>
#include <stack>
using namespace std;
int main()
{
    stack<int> s;
    for (int i = 1; i < 6; i++)
    {
        s.push(i);
    }
    cout << s.empty() << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << s.top() << " ";
        s.pop();
    }
        cout<<"\n" << s.empty() << endl;

    return 0;
}