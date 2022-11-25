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
Node* sort012(Node* head){

    int zeroCount = 0;
    int oneCount = 0;
    int twoCount = 0;

    Node* temp = head;

    while(temp!=NULL){
        if(temp->data==0) zeroCount++;
        if(temp->data==1) oneCount++;
        if(temp->data==2) twoCount++;

        temp = temp->next;
    }

    temp = head;

    while(temp!=NULL){
        if(zeroCount!=0){
            temp->data = 0;
            zeroCount--;
        }
        else if(oneCount!=0){
            temp->data = 1;
            oneCount--;
        }
        else if(twoCount!=0){
            temp->data = 2;
            twoCount--;
        }

        temp = temp->next;
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

    Node* node1 = new Node(1);
    Node* node2 = new Node(0);
    Node* node3 = new Node(2);
    Node* node4 = new Node(0);
    Node* node5 = new Node(1);
    Node* node6 = new Node(2);

    node1->next = node2;
    node2->next = node3;
    node3->next = node4;
    node4->next = node5;
    node5->next = node6;

    printList(node1);
    cout<<endl;

    Node* ans = sort012(node1);

    printList(node1);

 

    
    
return 0;
}