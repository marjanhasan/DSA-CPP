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
Node *input_tree()
{
    int val;
    cin >> val;
    Node *root;
    val == -1 ? root = NULL : root = new Node(val);

    queue<Node *> q;
    if (root)
        q.push(root);

    while (!q.empty())
    {
        Node *p = q.front();
        q.pop();

        int l, r;
        cin >> l >> r;
        Node *tleft, *tright;
        l == -1 ? tleft = NULL : tleft = new Node(l);
        r == -1 ? tright = NULL : tright = new Node(r);

        p->left = tleft;
        p->right = tright;

        if (p->left)
            q.push(p->left);
        if (p->right)
            q.push(p->right);
    }
    return root;
}
void level_order(Node *root)
{
    if (root == NULL)
        return;
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
bool search(Node *root, int x)
{
    if (root == NULL)
        return false;
    if (x == root->val)
        return true;
    else if (x < root->val)
        return search(root->left, x);
    else
        return search(root->right, x);
}
int main()
{
    Node *root = input_tree();
    level_order(root);
    (search(root, 9)) ? cout << "YES\n" : cout << "NO\n";
    return 0;
}
