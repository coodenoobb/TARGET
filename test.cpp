#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
        int data;
        Node *next;

        Node(int d){
            this->data = d;
            this->next = NULL;
        }
};

void helper(Node* &head, Node* cur, Node* pre){
    //base case

    if(cur==NULL){
        head = pre;
        return;
    }

    Node * fwd = cur->next;
    helper(head,fwd,cur);
    cur->next = pre;


}
Node* reverseList(Node* &head){
    Node* curr = head;
    Node* prev = NULL;

    helper(head,curr,prev);

    return head;
}

void printList(Node* head){
    Node *temp= head;

    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}
int main(){

    Node *node1 = new Node(3);
    Node *node2 = new Node(5);
    Node *node3 = new Node(7);

    node1->next = node2;
    node2->next = node3;
   
    printList(node1);
    cout<<endl;
    reverseList(node1);
    cout<<endl;
    printList(node1);



return 0;
}