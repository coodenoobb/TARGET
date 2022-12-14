#include<bits/stdc++.h>
using namespace std;
void insertAtBottom(stack<int> &st, int num){
    // base case
    if(st.empty()){
        st.push(num);
        return;
    }

    int top = st.top();
    st.pop();
    insertAtBottom(st,num);
    st.push(top);
}
void reverseStack(stack<int> &st){
    // base case
    if(st.empty())    return;

    int top = st.top();
    st.pop();

    reverseStack(st);
    insertAtBottom(st,top);

}
void printStack(stack <int> st){
    while(st.empty()==false){
        int x = st.top();
        cout<<x<<endl;
        st.pop();

    }
}
int main(){
    stack <int> st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);

    printStack(st);
    reverseStack(st);
    cout<<"----------------"<<endl;
    printStack(st);

return 0;
}