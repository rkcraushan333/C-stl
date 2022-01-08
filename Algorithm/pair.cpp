#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    //make a pair
    pair<int, char> p;
    p.first = 5;
    p.second = 'b';
    cout << p.first << " " << p.second << endl;

    //copying a pair
    pair<int, char> p1(p);
    cout << p1.first << " " << p1.second << endl;

    //using make_pair() function
    pair<int, string> p2 = {89, "string"};
    cout << p2.first << " " << p2.second << endl;

    //pair of pair
    pair<pair<int, char>, string> q;
    q.second = "nine";
    q.first.first = 9;
    q.first.second = 'k';
    cout << q.first.first << " " << q.first.second << " " << q.second << endl;
}