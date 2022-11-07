#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int data;
    Node *next;

    Node(int d)
    {
        this->data = d;
        this->next = NULL;
    }
};

// Slow and Fast Linked
Node *getMiddle(Node *&head)
{

    if (head == NULL || head->next == NULL)
    {
        return NULL;
    }

    Node *slow = head;
    Node *fast = head->next;

    while (fast != NULL)
    {
        fast = fast->next;
        if (fast != NULL)
        {
            fast = fast->next;
        }
        slow = slow->next;
    }

    return slow;
}

void printList(Node *head)
{
    Node *temp = head;

    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}
int main()
{

    Node *node1 = new Node(3);
    Node *node2 = new Node(5);
    Node *node3 = new Node(7);
    Node *node4 = new Node(9);
    Node *node5 = new Node(11);

    node1->next = node2;
    node2->next = node3;
    node3->next = node4;
    node4->next = node5;

    printList(node1);
    cout << endl;

    Node *ans = getMiddle(node1);
    printList(ans);

    return 0;
}