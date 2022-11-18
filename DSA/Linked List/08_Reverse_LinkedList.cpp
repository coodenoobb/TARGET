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
// revrse by rec
Node* reverseByRec(Node* head){
    //base case;
    if(head == NULL or head->next == NULL){
        return head;
    }

    //
    Node* newhead = reverseByRec(head->next);        // we will pass head ka next
    head->next->next = head;
    head->next = NULL;

    return newhead;

}


// Iterative Approach
void reverseList (Node* &head){

    Node *curr = head;
    Node *prev = NULL;
    Node *fwd = NULL;

    while(curr!=NULL){
        fwd = curr->next;       // storing fwd pointer
        curr->next = prev;      // store prev ptr in curr
        prev = curr;            //  move prev one ptr ahead
        curr = fwd;             // move curr ahead
    }
    head = prev;
    
}

// Recursive Approach

void helper(Node* &head, Node *curr, Node *prev){

    if(curr==NULL){         // base case
        head = prev;
        return;
    }

    Node * fwd = curr->next;
    helper(head,fwd,curr);
    curr->next = prev;

}

Node* reverse(Node * head){

    Node * curr = head;
    Node * prev = NULL;

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
    Node * ans = reverseByRec(node1);
    printList(ans);



return 0;
}