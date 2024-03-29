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

bool ifLooped(Node* head){
    if(head == NULL)    return false;

    map<Node*, bool> visited;
    Node* temp = head;

    while(temp!=NULL){
        if(visited[temp]==true){
            cout<<"Loop start at "<<temp->data<<endl;
            return true;
        }

        visited[temp]=true;
        temp = temp->next;
    }

    return false;


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
    node5->next = node3;


    bool ans = ifLooped(node1);
    if(ans){
        cout<<"Looped"<<endl;
    }
    else {
        cout<<"Not Looped"<<endl;
    }

    // printList(node1);
return 0;
}