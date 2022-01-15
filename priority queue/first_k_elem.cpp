#include <iostream>
#include <queue>
using namespace std;
void query_print(priority_queue<int, vector<int>, greater<int>> pq)
{
    while (!pq.empty())
    {
        cout<<pq.top()<<" ";
        pq.pop();
    }
    
}
int main()
{
    priority_queue<int, vector<int>, greater<int>> pq;
    int n;
    cin >> n;
    int k = 3;
    int cs = 0;
    while (scanf("%d", &n) != EOF)
    {
        if (n == -1)
        {
            query_print(pq);
        }
        else if (cs < k)
        {
            pq.push(n);
            cs++;
        }
        else
        {
            if (n > pq.top())
            {
                pq.pop();
                pq.push(n);
            }
        }
    }

    return 0;
}