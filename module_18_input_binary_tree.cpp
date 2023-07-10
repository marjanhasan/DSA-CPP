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
    {
        cout << "Invalid tree" << endl;
        return;
    }
    queue<Node *> q;   // khali queue
    q.push(root);      // front e root diye dilam
    while (!q.empty()) // queue khali na hwa porjonto cholbe
    {
        Node *f = q.front(); // front node rakhlam
        q.pop();             // front node ber kre dilam

        cout << f->val << " "; // front node er value print krlam

        // next level e gelam
        if (f->right)
            q.push(f->right);
        if (f->left)
            q.push(f->left); //
    }
}
int main()
{
    Node *root = input_tree();
    level_order(root);
    return 0;
}
