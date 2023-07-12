#include <bits/stdc++.h>
/*
    Tree Node class.

    class BinaryTreeNode
    {
        T data;
        BinaryTreeNode<T> *left;
        BinaryTreeNode<T> *right;

        BinaryTreeNode(T data) {
            this->data = data;
            left = NULL;
            right = NULL;
        }
    }
*/
long long sum = 0;
void inorder(BinaryTreeNode<int> *root)
{
    if (root == NULL)
    {
        return;
    }
    if (root->left)
        sum += root->left->data;
    inorder(root->left);
    // cout << root->val << " ";
    inorder(root->right);
}
long long leftSum(BinaryTreeNode<int> *root)
{
    // Write your code here.
    sum = 0;
    inorder(root);
    return sum;
}