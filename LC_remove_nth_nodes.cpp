class Solution
{
public:
    void delete_node(ListNode *head, int pos)
    {
        ListNode *tmp = head;
        for (int i = 1; i < pos; i++)
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
    ListNode *removeNthFromEnd(ListNode *head, int n)
    {
        int sz = size(head);
        if (n == 1 && sz == 1)
            delete_head(head);
        else if (sz == n)
            delete_head(head);
        else
        {
            delete_node(head, (sz - n));
        }
        return head;
    }
};