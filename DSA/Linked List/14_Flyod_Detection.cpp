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
// if LL is straight Slow will never meet Fast
bool floydCycle(Node* head){

    if(head == NULL) return false;

    Node* slow = head;
    Node* fast = head;

    while(slow!=NULL && fast!=NULL){
        
        fast = fast->next;
        if(fast!=NULL)  fast = fast->next;

        slow = slow->next;

        if(slow==fast)  return true;
    }
    return false;
}

Node* getIntersection(Node* head){

    if(head==NULL)  return NULL;

    Node* slow = head;
    Node* fast = head;

    while(slow!=NULL && fast!=NULL){
        fast = fast->next;
        if(fast!=NULL)  fast=fast->next;

        slow = slow->next;
        if(slow==fast)  return slow;
    }

    return NULL;
}

Node* getStartingPoint(Node* head){
    if(head==NULL)  return NULL;

    Node* intersection = getIntersection(head);

    Node* slow = head;
    while(slow!=intersection){
        slow=slow->next;
        intersection=intersection->next;
    }

    return slow;

}

void removeLoop(Node* head){
    if(head==NULL)  return;

    Node* start = getStartingPoint(head);

    Node* temp = start;

    while(temp->next!=start){
        temp = temp->next;
    }

    temp->next = NULL;
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
    Node* node2 = new Node(2);
    Node* node3 = new Node(3);
    Node* node4 = new Node(4);
    Node* node5 = new Node(5);
    Node* node6 = new Node(6);

    node1->next = node2;
    node2->next = node3;
    node3->next = node4;
    node4->next = node5;
    node5->next = node6;
    node6->next = node4;

    Node* ans = getStartingPoint(node1);

    cout<<ans->data<<endl;

    removeLoop(node1);
    printList(node1);

    
    
return 0;
}