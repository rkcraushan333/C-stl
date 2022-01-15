#include <iostream>
#include <cstring>
using namespace std;
class fun
{
public:
    void operator()(string s)
    {
        cout << "Hello " << s;
    }
};
int main()
{
    fun f;        // constructor
    f("Raushan"); //overloaded operator = like a function

    return 0;
}