#include <bits/stdc++.h>
using namespace std;

int main()
{
    list<int> myList;
    int val;
    cin >> val;
    while (val != -1)
    {
        myList.push_back(val);
        cin >> val;
    }
    myList.sort();
    myList.unique();
    for (auto it = myList.begin(); it != myList.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;
    return 0;
}
