#include <bits/stdc++.h>
using namespace std;
class MaxHeap
{
public:
    vector<int> v;
    MaxHeap()
    {
    }
    void up_heapify(int idx)
    {
        while (0 < idx && v[idx] > v[(idx - 1) / 2])
        {
            swap(v[idx], v[(idx - 1) / 2]);
            idx = (idx - 1) / 2;
        }
    }
    void push(int val)
    {
        v.push_back(val);
        up_heapify(v.size() - 1);
    }
    void printHeap()
    {
        for (int val : v)
        {
            cout << val << " ";
        }
        cout << "\n";
    }
};
int main()
{
    MaxHeap mx;
    mx.push(1);
    mx.push(2);
    mx.push(3);
    mx.push(4);
    mx.push(5);
    mx.printHeap();
    return 0;
}
