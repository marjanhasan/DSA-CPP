#include <bits/stdc++.h>
using namespace std;
bool cmp(int a, int b)
{
    return a > b;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        map<int, int> mp;
        while (n--)
        {
            int a;
            cin >> a;
            mp[a]++;
        }
        vector<int> v;
        for (auto i : mp)
        {
            v.push_back(i.first);
        }
        sort(v.begin(), v.end(), cmp);
        for (auto x : v)
        {
            cout << x << " ";
        }
        cout << endl;
    }
    return 0;
}
