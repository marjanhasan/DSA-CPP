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
int t = 0;
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
    {
        return;
    }
    queue<Node *> q;
    q.push(root);
    while (!q.empty())
    {
        Node *f = q.front();
        q.pop();
        t++;
        if (f->right)
            q.push(f->right);
        if (f->left)
            q.push(f->left);
    }
}
int maxHeight(Node *root)
{
    if (root == NULL)
        return 0;
    int l = maxHeight(root->left);
    int r = maxHeight(root->right);
    return max(l, r) + 1;
}
int main()
{
    Node *root = input_tree();
    level_order(root);
    int h = maxHeight(root);
    (t == pow(2, h) - 1) ? cout << "YES" << endl : cout << "NO" << endl;
    return 0;
}
