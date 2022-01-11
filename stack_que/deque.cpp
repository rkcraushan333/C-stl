#include <iostream>
#include <deque>
using namespace std;
int main()
{
    deque<int> d;
    for (int i = 1; i < 6; i++)
    {
        d.push_back(i);
        d.push_front(i + 1);
    }
    for (int i = 0; i < 5; i++)
    {
        cout << d.front() << " " << d.back()<<" ";
        d.pop_back();
        d.pop_front();
    }

    cout << "\n"
         << d.empty() << endl;

    return 0;
}