#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    set<int> s;
    while (t--)
    {
        int a, b;
        cin >> a >> b;
        if (a == 1)
            s.insert(b);
        else if (a == 2)
            s.erase(b);
        else if (a == 3)
        {
            (s.count(b)) ? cout << "Yes\n" : cout << "No\n";
        }
    }
    return 0;
}
