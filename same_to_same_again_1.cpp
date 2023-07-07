#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *next;
    Node *prev;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};
class myStack
{
public:
    Node *head = NULL;
    Node *tail = NULL;
    int sz = 0;
    void push(int val)
    {
        sz++;
        Node *newNode = new Node(val);
        if (head == NULL)
        {
            head = newNode;
            tail = newNode;
            return;
        }
        newNode->prev = tail;
        tail->next = newNode;
        tail = tail->next;
    }
    void pop()
    {
        sz--;
        Node *deleteNode = tail;
        tail = tail->prev;
        if (tail == NULL)
        {
            head = NULL;
        }
        else
        {
            tail->next = NULL;
        }

        delete deleteNode;
    }
    int top()
    {
        return tail->val;
    }
    int size()
    {
        return sz;
    }
    bool empty()
    {
        if (sz == 0)
            return true;
        else
            return false;
    }
};
class myQueue
{
public:
    Node *head = NULL;
    Node *tail = NULL;
    int sz = 0;
    void push(int val)
    {
        sz++;
        Node *newNode = new Node(val);
        if (head == NULL)
        {
            head = newNode;
            tail = newNode;
            return;
        }
        tail->next = newNode;
        newNode->prev = tail;
        tail = tail->next;
    }
    void pop()
    {
        sz--;
        Node *deleteNode = head;
        head = head->next;
        if (head == NULL)
        {
            tail = NULL;
            delete deleteNode;
            return;
        }
        head->prev = NULL;
        delete deleteNode;
    }
    int front()
    {
        return head->val;
    }
    int size()
    {
        return sz;
    }
    bool empty()
    {
        if (sz == 0)
            return true;
        else
            return false;
    }
};
int main()
{
    // Write your code here
    int n, m;
    cin >> n >> m;
    int arr1[n], arr2[m];
    myStack st;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        st.push(a);
    }
    int i = 0;
    while (!st.empty())
    {
        arr1[i] = st.top();
        st.pop();
        i++;
    }
    myQueue q;
    for (int i = 0; i < n; i++)
    {
        int b;
        cin >> b;
        q.push(b);
    }
    i = 0;
    while (!q.empty())
    {
        arr2[i] = q.front();
        q.pop();
        i++;
    }
    if (st.sz != q.sz)
    {
        cout << "NO";
        return 0;
    }
    for (int i = 0; i < n; i++)
    {
        if (arr1[i] != arr2[i])
        {
            cout << "NO";
            return 0;
        }
    }
    cout << "YES";
    return 0;
}
