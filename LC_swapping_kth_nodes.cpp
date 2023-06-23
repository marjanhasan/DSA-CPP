/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution
{
public:
    int size(ListNode *head)
    {
        ListNode *tmp = head;
        int cnt = 0;
        while (tmp != NULL)
        {
            cnt++;
            tmp = tmp->next;
        }
        return cnt;
    }
    ListNode *swapNodes(ListNode *head, int k)
    {
        int sz = size(head);
        int rk = (sz - k + 1);
        ListNode *leftNode = head;
        ListNode *rightNode = head;
        ListNode *tmp = head;
        for (int i = 1; i <= sz; i++)
        {
            if (k == i)
                leftNode = tmp;
            if (rk == i)
                rightNode = tmp;
            tmp = tmp->next;
        }
        swap(leftNode->val, rightNode->val);
        // return head;
        cout << leftNode->val << " print " << rightNode->val << endl;
        return head;
    }
};