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
    
    // step-1 : Reverse k nodes itera
    
    Node* curr = head;
    Node* prev = NULL;
    Node* fwd = NULL;
    int count = 0;
    
    while(count<k && curr!=NULL){
        fwd = curr->next;
        curr->next = prev;
        prev = curr;
        curr = fwd;
        count++;
    }
    
    // step-2 Recursion
    
    if(fwd!=NULL){
        head->next = reverseKlist(fwd,  k);
    }
    
    //step-3 return head of reversed node;
    
    return prev;

}



int main(){
    Node *node1 = new Node(3);
    Node *node2 = new Node(5);
    Node *node3 = new Node(7);
    Node *node4 = new Node(9);
    Node *node5 = new Node(11);
    Node *node6 = new Node(13);

    node1->next = node2;
    node2->next = node3;
    node3->next = node4;
    node4->next = node5;
    node5->next = node6;

    printList(node1);
    cout<<endl;
    Node* ans = reverseKlist(node1,2);
    printList(ans);
return 0;
}