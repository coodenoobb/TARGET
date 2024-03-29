#include<bits/stdc++.h>
using namespace std;
class Node {
    public:
        int data;
        Node *next;

    // Creating a constructor for the Node

    Node(int data){
        this -> data = data;
        this -> next = NULL;
    }
};
// Inserting value at head in SLL
void insertAtHead(Node * &head , int val){

    Node * newNode = new Node(val);
    newNode->next = head;
    head = newNode;
}

// Inserting at tail
void insertAtTail(Node * &head, int val){
    Node * newNode = new Node(val);         // creating new node with value (val) and node->next as (NULL)
    Node *temp = head;                    // creating a temp = head as to iterate over the list to find the next=NULL and not change the value of head

    if(temp==NULL){
        head = newNode;         // if the node is empty we place the new node there
    }

    while(temp->next!=NULL){        // Itereate the temp (=head) over the list to find the last node
        temp = temp->next;          // placing temp as the next node until we find last node
    }
    temp->next = newNode;       

}

void deleteNode(Node * &head, int pos){
    
    if(pos==1){                 // If postion is at head
        Node * temp = head;
        head = head->next;

        delete temp;            // deletin the node is important 
    }

    else{
        Node * curr = head;        // Assign the head to current head aftewards
        Node * prev = NULL;        // Assign prev to NULL -> will modify afterwards

        for(int i=1;i<pos;i++){     // Iterating to the postion
            prev = curr;               
            curr = curr->next;
        }

        prev->next = curr->next;
        delete curr;

    }

}

// Traversing the SLL

void print (Node* &head){
    Node *temp = head ;  //creating a temp node beacuse we will change the value in this node

    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}

int main(){

    Node *node1 = new Node(1);     // Intilizing value in node with 20 as the constructor is created 

    Node *node2 = new Node(2);

    node1->next=node2;


    print(node1);
    cout<<endl;

    insertAtHead(node1,10);
    print(node1);


    insertAtTail(node1,90);
    print(node1);

    deleteNode(node1,4);
    print(node1);

   

    // cout<<node1->data<<endl;
    // cout<<node1->next<<endl;


return 0;
}