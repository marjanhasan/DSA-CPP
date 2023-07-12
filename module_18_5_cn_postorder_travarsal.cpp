#include <bits/stdc++.h>
/*
Following is the structure of Tree Node

class TreeNode
{
   public:
    int val;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int val)
    {
        this->val = val;
        left = NULL;
        right = NULL;
    }
};
*/
queue<int> q;
void postorder(TreeNode *root)
{
    if (root == NULL)
    {
        return;
    }
    postorder(root->left);
    postorder(root->right);
    // cout << root->val << " ";
    q.push(root->val);
}
vector<int> postorderTraversal(TreeNode *root)
{
    // Write your code here
    vector<int> v;
    if (root == NULL)
        return v;
    postorder(root);
    while (!q.empty())
    {
        v.push_back(q.front());
        q.pop();
    }
    return v;
}
