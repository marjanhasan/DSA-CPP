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
vector<int> v;
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
void nodeLevel(Node *root, int searchedValue)
{

    queue<pair<Node *, int>> q;
    int level = 0;
    q.push({root, level});
    while (!q.empty())
    {
        pair<Node *, int> pr = q.front();
        Node *sn = pr.first;
        level = pr.second;
        q.pop();
        if (level == searchedValue)
        {
            v.push_back(sn->val);
        }
        if (sn->left)
        {
            q.push({sn->left, level + 1});
        }
        if (sn->right)
        {
            q.push({sn->right, level + 1});
        }
    }
    if (searchedValue > level)
        v.push_back(-1);
}

int main()
{
    int s;
    Node *root = input_tree();
    cin >> s;
    nodeLevel(root, s);
    for (auto d : v)
    {
        (d == -1) ? cout << "Invalid" : cout << d << " ";
    }
    cout << endl;
    return 0;
}
