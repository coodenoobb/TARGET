#include<bits/stdc++.h>
using namespace std;
int findMinCost(string &str){
    if(str.length()%2!=0)   return -1;

    // we remove the valid brackets
    stack <char> st;
    for(int i=0;i<str.length();i++){
        char ch = str[i];

        if(ch=='{'){
            st.push(ch);
        }
        else{
            if(!st.empty() && st.top()=='{'){
                st.pop();
            }
            else{
                st.push(ch);
            }
        }
    }
    // we count no. of brackets
    int closedBrackets=0,openBrackets = 0; 

    while(!st.empty()){
        if(st.top()=='{')   closedBrackets++;
        else    openBrackets++;

        st.pop();
    }
    int ans = (closedBrackets+1)/2 + (openBrackets+1)/2;

    return ans;
}
int main(){

    string a = "{}{{{{}}";
    int ans = findMinCost(a);
    cout<<ans;

return 0;
}