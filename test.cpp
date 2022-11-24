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

Node* floydCycleDetection(Node* head){
    if(head==NULL)  return NULL;

    Node* slow = head;
    Node* fast = head;

    while(fast!=NULL and slow!=NULL){
        fast = fast->next;
        if(fast!=NULL)  fast=fast->next;

        slow=slow->next;
        if(slow==fast)  return slow;
        
    }

    return NULL;
}

Node* getStartingNode(Node* head){
    if(head==NULL)  return NULL;

    Node* intersection = floydCycleDetection(head);

    Node* slow = head;
    Node* fast = intersection;

    while(slow!=fast){
        slow=slow->next;
        fast=fast->next;
    }

    return slow;

}

Node* removeLoop(Node* head){
    if(head==NULL)  return NULL;


    Node* startNode = getStartingNode(head);
    Node* temp = startNode;

    while(temp->next!=startNode){
        temp = temp->next;
    }

    temp->next = NULL;
    return head;

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
   

    node1->next = node2;
    node2->next = node3;
    node3->next = node4;
    node4->next = node5;
    node5->next = node6;
    node6->next = node7;
    node7->next = node5;
    
    

    Node* flyod = floydCycleDetection(node1);
    cout<<"Intersection of Slow and Fast is at "<<flyod->data<<endl;

    Node* startOfLoop = getStartingNode(node1);
    cout<<"Start of Loop is at "<<startOfLoop->data<<endl;

    Node* withoutLoop = removeLoop(node1);
    cout<<"List without loop"<<endl;
    printList(withoutLoop);

   
    return 0;
}