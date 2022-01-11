#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;
bool compare(car A, car B)
{
    int d1 = A.dist();
    int d2 = B.dist();
    if (d1 == d2)
    {
        return A.car_name.length() < B.car_name.length();
    }

    return d1 < d2;
}
class car
{
public:
    string car_name;
    int x, y;
    
    car(string n, int x, int y)
    {
        car_name = n;
        this->x = x;
        this->y = y;
    }
    int dist()
    {
        return x * x + y * y;
    }
};
int main()
{
    int n;
    cin >> n;
    vector<car> c;
    for (int i = 0; i < n; i++)
    {
        int a, b;
        string s;
        cin >> s >> a >> b;
        car kar(s, a, b);
        c.push_back(kar);
    }
    sort(c.begin(), c.end(),compare);

    for (auto k : c)
    {
        cout << k.car_name << " " << k.x << " " << k.y << endl;
    }

    return 0;
}