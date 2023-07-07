#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    stack<int> st;
    queue<int> q;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        st.push(a);
    }
    for (int i = 0; i < n; i++)
    {
        int b;
        cin >> b;
        q.push(b);
    }
    if (st.size() != q.size())
    {
        cout << "NO";
        return 0;
    }
    while (!q.empty())
    {
        if (st.top() != q.front() || n != m)
        {
            cout << "NO";
            return 0;
        }
        q.pop();
        st.pop();
    }
    cout << "YES";
    return 0;
}