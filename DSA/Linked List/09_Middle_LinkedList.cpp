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

Node* getMiddleNode(Node* &head){
    if(head==NULL){
        return NULL;
    }

    Node* slow = head;
    Node* fast = head;

    while(fast!=NULL && fast->next!=NULL){
        
            fast=fast->next->next;
            slow = slow->next;
        
    }
    return slow;

}

void printList(Node *head)
{
    Node *temp = head;

    while (temp != NULL )
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}
int main()
{

    Node *node1 = new Node(3);
    Node *node2 = new Node(3);
    Node *node3 = new Node(1);
    Node *node4 = new Node(1);
    Node *node5 = new Node(7);
    Node *node6 = new Node(7);

    node1->next = node2;
    node2->next = node3;
    node3->next = node4;
    node4->next = node5;
    node5->next = node6;

    printList(node1);
    cout << endl;

    Node *ans = getMiddleNode(node1);
    printList(ans);

    return 0;
}