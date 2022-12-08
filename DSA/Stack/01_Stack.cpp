#include<bits/stdc++.h>
using namespace std;
int main(){
    stack<int> st;

    st.push(20); 
    st.push(22);
    st.push(24);
    st.push(26);
    st.pop();

    cout<<st.top(); 
    cout<<endl;

    if(st.empty()){
        cout<<"Stack is empty";
    }
    else{
        cout<<"Stack is not empty";
    }

    cout<<"Size of stack is "<<st.size();
return 0;
}