#include <iostream>
#include <string>
using namespace std;
int main()
{
    string s0;
    //checking empty
    if (s0.empty())
    {
        cout << "s0 is empty" << endl;
    }
    string s1 = "Mango juice costs 20";
    cout << s1 << endl;

    //appending
    s1.append(" rupees.");
    cout << s1 << endl;

    // length
    s0 = "Hello";
    cout << s0 << " " << s0.length() << " " << s1.length() << endl;

    // remove or clear
    s0.clear();

    string s2 = "Mango juice costs 20 rupees.";
    // compare two strings
    cout << s1.compare(s2) << endl;
    // find substrings
    cout << s1.find("juice") << endl;

    // remove substrings
    s2.erase(5, 6);
    cout << s2 << endl;

    //iterate over strings
    for (int i = 0; i < s1.size(); i++)
    {
        cout << s1[i];
    }
    cout << endl;

    //using iterator
    for (auto it = s1.begin(); it != s1.end(); it++)
    {
        cout << *it;
    }
    cout << endl;

    //using for each  loop
    for (auto c : s1)
        cout << c;

    cout << endl;
    return 0;
}