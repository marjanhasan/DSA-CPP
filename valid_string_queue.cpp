#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        stack<char> st;
        string s;
        cin >> s;
        for (char c : s)
        {
            if (st.empty())
            {
                st.push(c);
                continue;
            }
            if (c == 'A' && st.top() == 'B')
                st.pop();
            else if (c == 'B' && st.top() == 'A')
                st.pop();
            else
                st.push(c);
        }
        st.empty() ? cout << "YES" : cout << "NO";
        cout << endl;
    }
    return 0;
}