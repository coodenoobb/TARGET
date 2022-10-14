#include<bits/stdc++.h>
using namespace std;
class Node {
    public:
        int data;
        Node *prev;             // Assigining address to prev node
        Node *next;             // Assigning address to next node

        // Construtor
    
    Node (int d){
        this->data = d;
        this->prev =NULL;
        this->next =NULL;
    }
};

void print(Node * &head){
    Node* temp = head;

    while(temp!=0){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}

// Inserting at head
void insertAtHead(Node* &head, int val){  

    Node * newNode = new Node(val); 

    if(head==NULL){
        head = newNode;
    }       

    else{
    newNode->next = head;
    // newNode->prev = NULL;
    // head->prev=newNode->next;
    head = newNode;
    }

}

// Inserting at tail
void insertAtTail(Node* &head, int val){

    Node * newNode = new Node(val);

    Node *temp = head;

    if(temp==NULL){
        head = newNode;
    }

    while(temp->next!=NULL){
        temp = temp->next;
    }

    temp->next = newNode;
    newNode ->prev = temp->next;

}

//Inseting at a Position

void insertAtPosition(Node* &head, int pos, int val){

    Node* newNode = new Node(val);

    if(pos == 1){
        newNode->next = head;
        head = newNode;
    }
    else{

        Node* temp = head;

        for(int i = 1; i<pos-1; i++){
            temp = temp->next;
        }

        newNode->next = temp->next;
        temp->next= newNode;       
        newNode ->prev = temp;


    }
}

// Deleting a node

void deleteNode(Node* &head, int pos){


    if(pos==1){
        Node * temp = head;
        temp->next->prev = NULL;
        head = temp->next;
        temp->next = NULL;

        delete temp;

    }

    else{

        Node * curr = head;
        Node * last = NULL;

        for(int i=1;i<pos;i++){
            last = curr;
            curr = curr->next;
        }

        curr->prev = NULL;
        last->next = curr->next;
        curr->next = NULL;

        delete curr;



    }

}

int main(){

    Node *node1 = new Node(5);

    Node *node2 = new Node(6);

    Node *node3 = new Node(7);

    node1->next = node2;
    node2->prev = node1->next;

    node2->next = node3;
    node3->prev = node2->next;

    print(node1);

    insertAtTail(node1, 99);
    print(node1);

    insertAtHead(node1, 11);
    print(node1);

    

    insertAtPosition(node1, 2, 55);
    print(node1);


    deleteNode(node1,6);
    print(node1);
   
 
return 0;
}