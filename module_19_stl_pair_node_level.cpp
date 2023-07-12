#include <bits/stdc++.h>
/************************************************************

    Following is the TreeNode class structure

    template <typename T>
    class TreeNode {
       public:
        T val;
        bool isOriginal;
        TreeNode<T> *left;
        TreeNode<T> *right;

        TreeNode(T val) {
            this->val = val;
            left = NULL;
            right = NULL;
        }
    };

************************************************************/

int nodeLevel(TreeNode<int> *root, int searchedValue)
{
    // Write your code here.

    // step 1: q nibo
    queue<pair<TreeNode<int> *, int>> q;

    // step 2: vetore node r level push krbo
    q.push({root, 1});

    // step 3: q khali na hwa porjonto loop chalabo
    while (!q.empty())
    {
        // step 4: q thk pair value ber krbo
        pair<TreeNode<int> *, int> pr = q.front();

        // step 5: pair thk node ber krbo
        TreeNode<int> *node = pr.first;

        // step 6: pair thk level ber krbo
        int level = pr.second;

        // step 7: q er front ta pop kre dibo
        q.pop();

        // step 8: node er val check krbo
        if (node->val == searchedValue)
        {
            return level;
        }

        // step 9: left thakle ta q te push krbo
        if (node->left)
        {
            q.push({node->left, level + 1}); // next level tai 1 plus krbo
        }

        // step 10: right thakle ta q te push krbo
        if (node->right)
        {
            q.push({node->right, level + 1}); // next level tai 1 plus krbo
        }
    }
}
