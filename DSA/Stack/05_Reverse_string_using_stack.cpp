#include<bits/stdc++.h>
using namespace std;
int main(){

    string str = "laptop";
    cout<<str<<endl;

    stack<char> st;

    for(int i=0;i<str.length();i++){
        
        st.push(str[i]);
    }

    string ans = "";

    while(!st.empty()){
        char ch = st.top();
        ans = ans+ch;
        st.pop();
    }

    cout<<ans<<endl;

return 0;
}