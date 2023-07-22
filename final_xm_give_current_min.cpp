#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    priority_queue<int, vector<int>, greater<int>> pq;
    while (n--)
    {
        int a;
        cin >> a;
        pq.push(a);
    }
    int q;
    cin >> q;
    while (q--)
    {
        int b;
        cin >> b;
        if (b == 0)
        {
            int x;
            cin >> x;
            pq.push(x);
            cout << pq.top() << endl;
        }
        else if (b == 1)
        {
            (!pq.empty()) ? cout << pq.top() << endl : cout << "Empty\n";
        }
        else if (b == 2)
        {
            if (pq.empty())
            {
                cout << "Empty\n";
            }
            else
            {
                pq.pop();
                (!pq.empty()) ? cout << pq.top() << endl : cout << "Empty\n";
            }
        }
    }

    return 0;
}
