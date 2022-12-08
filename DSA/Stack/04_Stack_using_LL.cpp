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
class Stack{

    public:

    Node* top;

    Stack(){
        this->top=NULL;
    }

    void push(int elem){
        Node* temp = new Node(elem);
        if(temp==NULL){
            cout<<"Stack Overflow"<<endl;
        }

        temp->data;
        temp->next = top;
        top = temp;
        
    }

    void pop(){
        Node* temp = top;

        if(temp==NULL){
            cout<<"Stack underflow"<<endl;
        }

        else{
            temp = top;
            top = top->next;
            free(temp);
        }

    }

    int peek(){
        Node* temp;
        if(top==NULL){
            return -88;
        }
        else{
          
            return top->data;
        }
    }
};
int main(){

    Stack s;

    s.push(11);
    s.push(22);
    s.push(33);
    s.push(44);
    s.pop();

    cout<<s.peek();

return 0;
}