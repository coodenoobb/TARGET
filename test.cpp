#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node * next;

    Node(int d){
        this->data = d;
        this->next = NULL;
    }
};

void ReverseList(Node*&head){
    Node* curr = head;
    Node* prev = NULL;
    Node* fwd = NULL;

    while(curr!=NULL){
        fwd = curr->next;
        curr->next=prev;
        prev = curr;
        curr = fwd;
    }

    head = prev;

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

int main(){
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

    cout<<endl;

    ReverseList(node1);
    printList(node1);
return 0;
}