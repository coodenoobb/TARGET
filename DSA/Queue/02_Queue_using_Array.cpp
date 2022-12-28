#include<bits/stdc++.h>
using namespace std;
class Queue{
    public:
        int size;
        int front;
        int rear;
        int *arr;

    Queue(int size){
        this->size = size;
        arr = new int[size];
        front = 0;
        rear = 0;
    }

    void push(int elem){
        if(rear==size)  cout<<"Queue is full "<<endl;
        else{
            arr[rear] = elem;
            rear++;
        }
    }

    int pop(){
        if(front==rear){
            return -1;
        }
        else{
            int ans = arr[front];
            arr[front]=-1;
            front++;

            if(front==rear){
                front=0;
                rear=0;
            }
            return ans;
        }
    }
    
    int qfront(){
        if(front==rear){
            return -1;
        }
        else{
            return arr[front];
        }
    }

    bool isEmpty(){
        if(front==rear){
            return true;
        }
        else{
            return false;
        }
    }
};


int main(){
    Queue q1(4);

    q1.push(10); 
    q1.pop();
    q1.push(20); 
    q1.push(30); 
    q1.push(40); 
    

    cout<<q1.isEmpty()<<endl;

    cout<<q1.qfront();
return 0;
}