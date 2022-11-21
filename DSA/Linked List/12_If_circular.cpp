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

bool ifCircular(Node* &head){

    // if head == NULL
    if(head==NULL)  return true;

    else if(head->next == NULL) return false;

    else if(head->next == head) return true;

    Node* fwd = head->next;

    while(fwd!= NULL and fwd!=head){
        fwd = fwd->next;
    }

    if(fwd == head){
        return true;
    }
    else{
        return false;
    }


}



int main(){

    Node* node1 = new Node(10);
    Node* node2 = new Node(20);
    Node* node3 = new Node(30);
    Node* node4 = new Node(40);
    Node* node5 = new Node(50);
    // Node* node6 = new Node(60);


    node1->next = node2;
    node2->next = node3;
    node3->next = node4;
    node4->next = node5;
    node5->next = node1;

    bool ans = ifCircular(node1);

    if(ans == true){
        cout<<"Is Circular"<<endl;
    }
    else{
        cout<<"Not Circular"<<endl;
    }

    
return 0;
}