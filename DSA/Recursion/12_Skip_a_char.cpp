#include<bits/stdc++.h>
using namespace std;
void skipChar(string str, string newStr){
        if(str.length()==0){
            cout<<newStr<<endl;
            return ;
        }
        char ch = str.at(0);
        if(ch == 'a'){
            skipChar(newStr, str.substr(1));
        }
        else{
            skipChar(newStr+ch, str.substr(1));
        }
    
}
int main(){
    string str = "aabcacb";
    cout<<str<<endl;

    skipChar(str,"");
    
return 0;
}