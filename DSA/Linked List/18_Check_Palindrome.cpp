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
Node* getMiddleNode(Node* &head){

    Node* slow = head;
    Node* fast = head->next;

    while(fast!=NULL and fast->next!=NULL){
        fast = fast->next->next;
        slow = slow->next;
    }

    return slow;
}
Node* reverseList(Node* head){
    if(head==NULL or head->next==NULL) return head;

    Node* newHead = reverseList(head->next);
    head->next->next = head;
    head->next = NULL;

    return newHead;
}
bool checkPalindrome(Node* head){

    // get middle Node then reverse from that node
    Node* middleNode = getMiddleNode(head);
    
    // assign reversed list in the new list 
    Node* temp = middleNode->next;
    middleNode->next = reverseList(temp);

    // comapre both part of the list 

    Node* head1 = head;
    Node* head2 = middleNode->next;     

    while(head2!=NULL){
        if(head1->data!=head2->data) {   
            return false;
        }
        head1 = head1->next;
        head2 = head2->next;
    }
    return true;
}
int main(){

    Node *node1 = new Node(1);
    Node *node2 = new Node(2);
    Node *node3 = new Node(3);
    Node *node4 = new Node(3);
    Node *node5 = new Node(2);
    Node *node6 = new Node(1);

    node1->next = node2;
    node2->next = node3;
    node3->next = node4;
    node4->next = node5;
    node5->next = node6;
   
    printList(node1);
    cout<<endl;

    // Node* midNode = getMiddleNode(node1);
    // printList(midNode);
    // cout<<endl;

    // Node* revNode = reverseList(node1);
    // printList(revNode);
    // cout<<endl;


   
    cout<<endl;
    bool ans = checkPalindrome(node1);
    cout<<ans;

return 0;
}