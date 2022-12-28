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

    void pop(){
        if(front==rear){
            cout<<"Queue is Empty";
        }
        else{
            for(int i=0;i<rear-1;i++){
                arr[i] = arr[i+1];
            }
            rear--;
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

void printQueue(Queue Q){
    while(!Q.isEmpty()){
		cout<<" "<<Q.qfront();
		Q.pop();
	}
}

int main(){
    Queue q1(4);

    q1.push(10);
    q1.push(11);
    q1.push(11);
    q1.push(13);
    printQueue(q1);
    cout<<endl;
    q1.pop();

    q1.push(20);
    q1.push(21);
    printQueue(q1);
return 0;
}