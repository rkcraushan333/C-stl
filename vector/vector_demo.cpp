#include <iostream>
#include "vector.h"
using namespace std;
int main()
{
    vector<char> v;
    v.push_back(71);
    v.push_back(72);
    v.push_back(73);
    v.push_back(74);
    v.pop_back();
    v.push_back(76);

    cout << v.capacity() << endl;
    v.push_back(80);
    cout << v.capacity() << endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << endl;
    }

    return 0;
}
