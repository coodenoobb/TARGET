#include<bits/stdc++.h>
using namespace std;
class Stack{
    public:
        int size;
        int *arr;
        int top1;
        int top2;

    Stack(int s){
        this->size = s;
        arr = new int[s];
        top1 = -1;
        top2 = s;
    }

    void push1(int num){
        if(top2-top1>1){
            top1++;
            arr[top1]=num;
        }
    }

    void push2(int num){
        if(top2-top1>1){
            top2--;
            arr[top2]=num;
        }
    }

    void pop1(){
        if(top1>=0){
            top1--;
        }
        else{
            cout<<"Stack1 empty"<<endl;
        }
    }

    void pop2(){
        if(size>top2){
            top2++;
        }
        else{
            cout<<"Stack2 empty"<<endl;
        }
    }

    int peek1(){
        if(top1>=0)
            return arr[top1];

        else{
            return -88;
        }
    }

    int peek2(){
        if(size>top2)
            return arr[top2];
        else{
            return -88;
        }
    }
};
int main(){

    Stack st(6);

    st.push1(11);
    st.push1(12);
    st.push1(13);
    st.push2(21);
    st.push2(22);
    st.push2(23);

    cout<<st.peek1()<<endl;
    cout<<st.peek2()<<endl;

    st.pop1();
    st.pop2();

    cout<<st.peek1()<<endl;
    cout<<st.peek2()<<endl;

    st.pop1();
    st.pop2();

    

    cout<<st.peek1()<<endl;
    cout<<st.peek2()<<endl;

    st.pop1();
    st.pop2();
    cout<<st.peek1()<<endl;
    cout<<st.peek2()<<endl;

    return 0;
}