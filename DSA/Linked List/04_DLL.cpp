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

int main(){

    Node *node1 = new Node(5);

    Node *node2 = new Node(6);

    Node *node3 = new Node(7);

    node1->next = node2;
    node2->prev = node1->next;

    node2->next = node3;
    node3->prev = node2->next;

    print(node1);

return 0;
}