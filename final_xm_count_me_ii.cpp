#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        map<int, int> mp;
        int val = INT_MIN, q = 0;
        while (n--)
        {
            int i;
            cin >> i;
            mp[i]++;
            if (mp[i] > q)
            {

                q++;
                val = i;
            }
            else if (mp[i] == q && val < i)
            {
                val = i;
            }
        }
        cout << val << " " << q << endl;
    }
    return 0;
}
