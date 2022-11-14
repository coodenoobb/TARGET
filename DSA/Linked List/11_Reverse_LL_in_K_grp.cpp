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
void printList(Node* head){
    Node *temp= head;

    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}

Node* reverseKlist(Node* &head,int k){

    if(head==NULL){
        return head;
    }

    // Reverse nodes

    Node* curr = head;
    Node* prev = NULL;
    Node* fwd = NULL;

    while(k!=0){
        fwd = curr->next;
        curr->next = prev;
        prev = curr;
        curr = fwd;
    }

}



int main(){
    Node *node1 = new Node(3);
    Node *node2 = new Node(5);
    Node *node3 = new Node(7);
    Node *node4 = new Node(9);

    node1->next = node2;
    node2->next = node3;
    node3->next = node4;
return 0;
}