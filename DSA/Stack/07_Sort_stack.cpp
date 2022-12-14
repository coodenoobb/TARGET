#include<bits/stdc++.h>
using namespace std;
void insertInSortedManner(stack<int> &st, int num){
    //base case
    if(st.empty() || !st.empty() && st.top() < num){
        st.push(num);
        return;
    }

    int top = st.top();
    st.pop();
    insertInSortedManner(st,num);
    st.push(top);
}
void sortStack(stack <int> &st){
    //base case;
    if(st.empty())  return;

    int top = st.top();
    st.pop();

    sortStack(st);
    insertInSortedManner(st,top);
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
    st.push(5);
    st.push(7);
    st.push(2);
    st.push(6);

    printStack(st);
    sortStack(st);
    cout<<"----------------"<<endl;
    printStack(st);
return 0;
}