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

Node* helper(Node* first, Node* second){
    //only one elem in list 
    if(first->next==NULL){
        first->next = second;
        return first;
    }
    
    
    Node* curr1 = first;
    Node* curr2 = second;
    
    Node* fwd1 = first->next;
    Node* fwd2 = second->next;
    
    while(curr1!=NULL and curr2!=NULL){
        if((curr1->data <= curr2->data) and (curr2->data < fwd1->data)){
            curr1->next = curr2;
            fwd2 = curr2->next;
            curr2->next = fwd1;
            
            curr1 = curr2;
            curr2 = fwd2;
        }
        else{
            curr1 = curr1->next;
            fwd1 = fwd1->next;
            
            if(fwd1==NULL){
                curr1->next = curr2;
                return first;
            }
        }
    }
    return first;    
}

Node* sortTwoLists(Node* first, Node* second)
{
    // if first or second list is NULL
    if(first==NULL)    return second;
    else if(second==NULL)    return first;
    
    if(first->data <= second->data){
        helper(first,second);
    }
    
    else if(first->data > second->data){
        helper(second,first);
     }
    
}



int main(){

    Node* firstNode1 = new Node(5);
    Node* firstNode2 = new Node(6);
    Node* firstNode3 = new Node(9);
    Node* firstNode4 = new Node(23);
    Node* firstNode5 = new Node(54);

    firstNode1->next = firstNode2;
    firstNode2->next = firstNode3;
    firstNode3->next = firstNode4;
    firstNode4->next = firstNode5;

    
    Node* secondNode1 = new Node(1);
    Node* secondNode2 = new Node(25);
    Node* secondNode3 = new Node(36);
    Node* secondNode4 = new Node(120);
    

    secondNode1->next = secondNode2;
    secondNode2->next = secondNode3;
    secondNode3->next = secondNode4;
    
    cout<<"First List : ";
    printList(firstNode1);
    cout<<endl;

    cout<<"Second List : ";
    printList(secondNode1);
    cout<<endl;

    Node* soln = sortTwoLists(firstNode1,secondNode1);
    printList(soln);

return 0;
}