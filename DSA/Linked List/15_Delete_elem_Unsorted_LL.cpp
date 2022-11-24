#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    
        int data;
        Node* next;

        Node(int d){
            this->data = d;
            this->next = NULL;
        }

};
Node* deleteDuplicate(Node* head){
    Node* curr = head;

    while(curr!=NULL and curr->next!=NULL){

        Node* fwd = curr;
        Node* prev = NULL;

        while(fwd->next!=NULL){
            if(curr->data == fwd->next->data){
                prev = fwd->next;
                fwd->next = fwd->next->next;
                delete(prev);
            }
            else{
                fwd = fwd->next;
            }
        }
        curr=curr->next;
    }
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

    Node* node1 = new Node(6);
    Node* node2 = new Node(3);
    Node* node3 = new Node(8);
    Node* node4 = new Node(3);
    Node* node5 = new Node(1);
    Node* node6 = new Node(7);
    Node* node7 = new Node(6);

    node1->next = node2;
    node2->next = node3;
    node3->next = node4;
    node4->next = node5;
    node5->next = node6;
    node6->next = node7;

    printList(node1);
    cout<<endl;
 

    Node* newNode = deleteDuplicate(node1);
    printList(newNode);
    

    
    
return 0;
}