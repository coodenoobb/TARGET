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
int main(){
    
    int arr[5]={2,1,8,4,3};

    vector<int> ans;
    ans = nextSmallerElement(arr,5);

    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }



return 0;
}