#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int data;
    Node *next;

    Node(int d)
    {
        this->data = d;
        this->next = NULL;
    }
};

void printList(Node *head)
{
    Node *temp = head;

    while (temp != NULL)
    {
        cout << temp->data <<" ";
        temp = temp->next;
    }
}

bool ifLooped(Node* head){
    if(head==NULL)  return false;

    map<Node*, bool> visited;
    Node* temp = head;

    while(temp!=NULL){
        if(visited[temp]==true) return true;

        visited[temp]=true;
        temp=temp->next;
    }

    return false;
}

int main()
{

    Node *node1 = new Node(1);
    Node *node2 = new Node(2);
    Node *node3 = new Node(3);
    Node *node4 = new Node(4);
    Node *node5 = new Node(5);
    Node *node6 = new Node(6);
    Node *node7 = new Node(7);
    Node *node8 = new Node(8);
    Node *node9 = new Node(9);
    Node *node10 = new Node(10);

    node1->next = node2;
    node2->next = node3;
    node3->next = node4;
    node4->next = node5;
    node5->next = node6;
    node6->next = node7;
    node7->next = node8;
    node8->next = node9;
    node9->next = node10;
    node10->next = node5;

    // printList(node1);
    cout<<endl;

    bool isLooped = ifLooped(node1);

    if(isLooped){
        cout<<"Looped"<<endl;
    }
    else{
        cout<<"Not Looped"<<endl;
    }

    return 0;
}