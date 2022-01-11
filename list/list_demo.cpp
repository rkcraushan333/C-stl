#include <iostream>
#include <list>
using namespace std;
int main()
{
    list<int> l;
    list<string> l2{"Ram", "Aman", "Shyam", "Mohan"};
    l2.push_back("Rohit");
    l2.sort();
    // using for each loop
    for (auto a : l2)
    {
        cout << a << "-->";
    }

    // Reverse the list
    l2.reverse();
    // accessing the first and last element
    cout << endl
         << l2.front() << " " << l2.back() << endl;
    // removing first element
    l2.pop_front();
    //removing the last element
    l2.pop_back();
    cout << endl;
    // adding element to the front
    l2.push_front("Raushan");
    // adding element to the last
    l2.push_back("Rahul");
    // using iterator over the list
    for (auto it = l2.begin(); it != l2.end(); it++)
    {
        cout << *it << "-->";
    }
    return 0;
}