class Solution
{
public:
    void delete_node(ListNode *head, int pos)
    {
        ListNode *tmp = head;
        for (int i = 1; i <= pos - 1; i++)
        {
            tmp = tmp->next;
        }
        ListNode *deleteNode = tmp->next; // 30
        tmp->next = tmp->next->next;
        delete deleteNode;
    }
    void delete_head(ListNode *&head)
    {
        ListNode *deleteNode = head;
        head = head->next;
        delete deleteNode;
    }
    ListNode *removeElements(ListNode *head, int val)
    {
        ListNode *tmp = head;
        int pos = 0;
        while (tmp != NULL)
        {
            if (tmp->val == val && pos == 0)
            {
                delete_head(head);
                tmp = head;
                pos = 0;
                continue;
            }
            else if (tmp->val == val)
            {
                delete_node(head, pos);
                tmp = head;
                pos = 0;
                continue;
            }
            pos++;
            tmp = tmp->next;
        }
        return head;
    }
};