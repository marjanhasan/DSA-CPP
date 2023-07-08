#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        stack<char> st;
        int n;
        cin >> n;
        string s;
        cin >> s;
        for (char c : s)
        {
            if (!st.empty() && st.top() == c)
            {
                st.pop(); // Colors vanish each other
                continue;
            }

            if (!st.empty())
            {
                char top = st.top();

                if ((top == 'R' && c == 'B') || (top == 'B' && c == 'R'))
                {
                    st.pop();
                    st.push('P');
                }
                else if ((top == 'R' && c == 'G') || (top == 'G' && c == 'R'))
                {
                    st.pop();
                    st.push('Y');
                }
                else if ((top == 'B' && c == 'G') || (top == 'G' && c == 'B'))
                {
                    st.pop();
                    st.push('C');
                }
                else
                {
                    st.push(c);
                }
            }
            else
            {
                st.push(c);
            }
        }

        string result;
        while (!st.empty())
        {
            result += st.top();
            st.pop();
        }
        for (char c : result)
        {
            if (st.empty() || st.top() != c)
                st.push(c);
            else if (st.top() == c)
                st.pop();
        }
        while (!st.empty())
        {
            cout << st.top();
            st.pop();
        }
        cout << endl;
    }

    return 0;
}
