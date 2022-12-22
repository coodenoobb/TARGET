#include<bits/stdc++.h>
using namespace std;
vector<int> nextSmallerElement(int arr[],int n){
    stack<int> st;
    st.push(-1);
    vector<int> ans(n);

    for(int i=n-1;i>=0;i--){
        int curr = arr[i];

        while(st.top()>=curr){
            st.pop();
        }
        ans[i]=st.top();
        st.push(curr);
    }
    return ans;
}
vector<int> prevSmallerElement(int arr[],int n){
    stack<int> st;
    st.push(-1);
    vector<int> ans(n);

    for(int i=0;i<n;i++){
        int curr = arr[i];

        while(st.top()>=curr){
            st.pop();
        }
        ans[i]=st.top();
        st.push(curr);
    }
    return ans;
}
int main(){
    
    int arr[6]={2,1,5,6,2,3};

    vector<int> nextAns;
    vector<int> prevAns;
    nextAns = nextSmallerElement(arr,6);
    prevAns = prevSmallerElement(arr,6);
    for(int i=0;i<nextAns.size();i++){
        cout<<nextAns[i]<<" ";
    }
    cout<<endl;
    for(int i=0;i<prevAns.size();i++){
        cout<<prevAns[i]<<" ";
    }


return 0;
}