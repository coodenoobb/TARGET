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

// Using Node->Data
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

// Using Node
void insertAtTail(Node* &tail, Node* curr){
    tail->next = curr;
    tail = curr;
}

Node* sortList(Node *head)
{
    // Write your code here.
    Node* zeroHead = new Node(-99);
    Node* zeroTail = zeroHead;
    Node* oneHead = new Node(-99);
    Node* oneTail = oneHead;
    Node* twoHead = new Node(-99);
    Node* twoTail = twoHead;
    Node* curr = head;
    
    // creating three lists for 0s , 1s and 2s
    while(curr!=NULL){
        int val = curr->data;
        
        if(val==0){
            insertAtTail(zeroTail,curr);
        }
        else if(val == 1){
            insertAtTail(oneTail,curr);
        }    
        else if(val == 2){
            insertAtTail(twoTail,curr);
        }    
        curr = curr->next;      
    }   
    // merge all three lists
    if(oneHead->next!=NULL){
        zeroTail->next = oneHead->next;
    }
    else{
        zeroTail->next = twoHead->next;
    }
    
    oneTail->next = twoHead->next;
    twoTail->next = NULL;
    head = zeroHead->next;
    
    delete(oneHead);
    delete(twoHead);
    delete(zeroHead);
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

    Node *node1 = new Node(1);
    Node *node2 = new Node(1);
    Node *node3 = new Node(2);
    Node *node4 = new Node(0);
    Node *node5 = new Node(1);
    Node *node6 = new Node(2);
    Node *node7 = new Node(0);
    Node *node8 = new Node(0);
    

    node1->next = node2;
    node2->next = node3;
    node3->next = node4;
    node4->next = node5;
    node5->next = node6;
    node6->next = node7;
    node7->next = node8;

    

    printList(node1);
    cout<<endl;

    Node* ans = sortList(node1);

    printList(ans);

 

    
    
return 0;
}