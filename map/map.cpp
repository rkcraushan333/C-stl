#include <iostream>
#include <map>
#include <cstring>
using namespace std;
int main()
{
    map<string, int> m;
    // 1. insertion methods
    m.insert(make_pair("mango", 60));

    pair<string, int> p;
    p.first = "apple";
    p.second = 100;
    m.insert(p);

    m["banana"] = 30;

    // 2.search method

    string fruit;
    cin >> fruit;
    auto it = m.find(fruit);
    m["mango"] += 20;
    if (it != m.end())
    {
        cout << "Price of " << fruit << " is " << it->second << endl;
    }
    else
    {
        cout << "Absence" << endl;
    }
    // 3. erase
    m.erase(fruit);

    // another way to find the key
    // ** map stores unique keys only once
    if (m.count(fruit))
    {
        cout << "price is " << m[fruit] << endl;
    }
    else
    {
        cout << "Absence" << endl;
    }
    m["lichi"] = 70;
    m["guava"] = 45;
    for (auto a : m)
    {
        cout << a.first << " " << a.second << endl;
    }

    return 0;
}
