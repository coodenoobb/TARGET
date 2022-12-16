#include<bits/stdc++.h>
using namespace std;
class Stack{
    public:
        int size;
        int *arr;
        int top;

    Stack(int size){
        this->size = size;
        arr = new int[size];
        top = -1;
    }

    void push(int elem){
        if(size-top>1){
            top++;
            arr[top]=elem;
        }
        else{
            cout<<"Stack overflow"<<endl;
        }
    }

    void pop(){
        if(top>=0){
            top--;
        }
        else{
            cout<<"Stack underflow"<<endl;
        }
    }

    int peek(){
        if(top>=0){
            return arr[top];
        }
        else{
            return -1;
        }
    }

    bool isEmpty(){
        if(top==-1){
            return true;
        }
        else{
            return false;
        }
    }
};
int main(){

    Stack a(4);

    a.push(10);
    a.push(20);
    a.push(30);
    a.push(40);

    cout<<a.peek()<<endl;

    a.pop();
    cout<<a.peek();

return 0;
}