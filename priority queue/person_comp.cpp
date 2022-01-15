#include <iostream>
#include <queue>
using namespace std;

// Person class
class person
{
public:
    int age;
    string name;
    person()
    {
    }
    person(int n, string s)
    {
        age = n;
        name = s;
    }
};
class personComp
{
public:
    bool operator()(person A, person B)
    {
        return A.age < B.age;
    }
};

int main()
{
    int n;
    cin >> n;
    priority_queue<person, vector<person>, personComp> pq;
    for (int i = 0; i < n; i++)
    {
        int a;
        string s1;
        cin >> s1 >> a;
        person p(a, s1);
        pq.push(p);
    }
    int m;
    cin >> m;
    for (int i = 0; i < m; i++)
    {
        person P = pq.top();
        cout << P.name << " " << P.age << endl;
        pq.pop();
    }

    return 0;
}