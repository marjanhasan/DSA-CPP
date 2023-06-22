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
void print_normal(Node *head)
{
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl;
}
void print_reverse(Node *tail)
{
    Node *tmp = tail;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->prev;
    }
    cout << endl;
}
int size(Node *head)
{
    Node *tmp = head;
    int cnt = 0;
    while (tmp != NULL)
    {
        cnt++;
        tmp = tmp->next;
    }
    return cnt;
}
void insert_tail(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);
    if (tail == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    newNode->prev = tail;
    tail = tail->next;
}
bool are_some(Node *headOne, Node *headTwo)
{
    if (size(headOne) != size(headTwo))
    {
        return false;
    }
    while (headOne->next != NULL && headTwo->next != NULL)
    {
        if (headOne->val != headTwo->val)
            return false;
        headOne = headOne->next;
        headTwo = headTwo->next;
    }
    return true;
}
int main()
{
    Node *headOne = NULL;
    Node *tailOne = NULL;
    Node *headTwo = NULL;
    Node *tailTwo = NULL;
    int val;
    while (true)
    {
        cin >> val;
        if (val == -1)
            break;
        insert_tail(headOne, tailOne, val);
    }
    while (true)
    {
        cin >> val;
        if (val == -1)
            break;
        insert_tail(headTwo, tailTwo, val);
    }
    print_normal(headOne);
    print_normal(headTwo);
    are_some(headOne, headTwo) ? cout << "YES\n" : cout << "NO\n";
    return 0;
}
