#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *left;
    Node *right;
    Node(int val)
    {
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};
void insert(Node *&root, int val)
{
    Node *newNode = new Node(val);
    if (root == NULL)
    {
        root = newNode;
        return;
    }

    Node *cur = root;
    Node *par = NULL;
    while (cur != NULL)
    {
        if (newNode->val < cur->val)
        {
            par = cur;
            cur = cur->left;
        }
        else
        {
            par = cur;
            cur = cur->right;
        }
    }
    if (newNode->val < par->val)
        par->left = newNode;
    else
        par->right = newNode;
}
void print_bst(Node *root)
{
    queue<Node *> q;
    q.push(root);
    while (!q.empty())
    {
        Node *f = q.front();
        q.pop();
        cout << f->val << " ";
        if (f->left)
            q.push(f->left);
        if (f->right)
            q.push(f->right);
    }
}
bool search_bst(Node *root, int s)
{
    Node *cur = root;
    while (cur != NULL)
    {
        if (s < cur->val)
            cur = cur->left;
        else if (s > cur->val)
            cur = cur->right;
        else
            return true;
    }
    return false;
}
int main()
{
    Node *root = NULL;
    insert(root, 5);
    insert(root, 4);
    insert(root, 6);
    insert(root, 2);
    insert(root, 7);
    print_bst(root);
    (search_bst(root, 70)) ? cout << "yes\n" : cout << "NO\n";
    return 0;
}
