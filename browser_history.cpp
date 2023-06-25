#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    string page;
    Node *prev;
    Node *next;

    Node(string page)
    {
        this->page = page;
        this->prev = NULL;
        this->next = NULL;
    }
};

void visit(string page, Node *&head, Node *&tail, Node *&curr)
{
    if (head == NULL)
    {
        Node *newNode = new Node(page);
        head = newNode;
        tail = newNode;
        curr = newNode;
    }
    else
    {
        Node *temp = head;
        bool find = false;
        while (temp != NULL)
        {
            if (temp->page == page)
            {
                curr = temp;
                find = true;
                break;
            }
            temp = temp->next;
        }

        if (!find)
        {
            cout << "Not Available" << endl;
            return;
        }
    }
    cout << curr->page << endl;
}

void next(Node *&curr, Node *tail)
{

    if (curr == NULL || curr == tail)
    {
        cout << "Not Available" << endl;
        return;
    }

    curr = curr->next;
    cout << curr->page << endl;
}

void prev(Node *&curr, Node *head)
{

    if (curr == NULL || curr == head)
    {
        cout << "Not Available" << endl;
        return;
    }
    curr = curr->prev;
    cout << curr->page << endl;
}

int main()
{
    string str;

    Node *head = NULL;
    Node *tail = NULL;
    Node *curr = NULL;

    while (cin >> str)
    {
        if (str == "end")
            break;
        Node *newNode = new Node(str);
        if (head == NULL)
        {
            head = newNode;
            tail = newNode;
        }
        else
        {
            tail->next = newNode;
            newNode->prev = tail;
            tail = newNode;
        }
    }

    int q;
    cin >> q;

    for (int i = 0; i < q; i++)
    {
        cin >> str;
        if (str == "visit")
        {
            cin >> str;
            visit(str, head, tail, curr);
        }
        else if (str == "next")
        {
            next(curr, tail);
        }
        else if (str == "prev")
        {
            prev(curr, head);
        }
    }

    return 0;
}
