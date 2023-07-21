#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        mp[a]++;
    }
    // cout << "number of unique values: " << mp.size() << endl;
    for (auto i : mp)
    {
        // cout << i.first << " : " << i.second << endl; // key kto bar ache key : value
        // if (i.second > 1)
        // {
        //     cout << "duplicate exists" << endl;
        // }
        cout << i.first << " "; // unique value print
    }
    cout << endl;
    return 0;
}
