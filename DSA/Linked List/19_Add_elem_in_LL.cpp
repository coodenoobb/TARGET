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
void printList(Node* head){
    Node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }

}
Node* reverseList(Node* head){

    if(head==NULL or head->next==NULL)  return head;

    Node* newHead = reverseList(head->next);
    head->next->next = head;
    head->next = NULL;

    return newHead;
}
void insertAtTail(Node* &head, Node* &tail, int val){
    Node* temp = new Node(val);
    if(head==NULL){
        head = temp;
        tail = temp;
    }
    else{
        tail->next = temp;
        tail = temp;
    }
}
Node* add(Node* first, Node* second){
    int carry = 0;
    Node* ansHead = NULL;
    Node* ansTail = NULL;

    while(first!=NULL || second!=NULL || carry!=0){
        
        int val1,val2 = 0;
        if(first!=NULL){
            val1 = first->data;
        }
        if(second!=NULL){
            val2 = second->data;
        }
        int sum = carry + val1 + val2;
        int digit = sum%10;

        insertAtTail(ansHead,ansTail,digit);
        carry = sum/10;
        if(first!=NULL) first = first->next;
        if(second!=NULL) second = second->next;
    }  
    return ansHead;
}

Node* addList(Node* first, Node* second){
    
    // reverse both LL

    first = reverseList(first);
    second = reverseList(second);

    // add both the list

    Node* ans = add(first,second);

    ans = reverseList(ans);
    return ans; 

}
int main(){
    Node* firstnode1 = new Node(2);
    Node* firstnode2 = new Node(3);
    Node* firstnode3 = new Node(6);
    Node* firstnode4 = new Node(4);

    firstnode1->next = firstnode2;
    firstnode2->next = firstnode3;
    firstnode3->next = firstnode4;

    Node* secondnode1 = new Node(3);
    Node* secondnode2 = new Node(9);
    Node* secondnode3 = new Node(8);
    

    secondnode1->next = secondnode2;
    secondnode2->next = secondnode3;

    printList(firstnode1);
    cout<<endl;
    printList(secondnode1);
    cout<<endl;

    Node* sum = addList(firstnode1,secondnode1);
    printList(sum);
   

return 0;
}