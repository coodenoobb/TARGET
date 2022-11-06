#include<bits/stdc++.h>
using namespace std;
void printNum(int n){
    if(n==0){
        return;
    }

    
    printNum(n-1);
    cout<<n<<" ";
    cout<<endl;
    
    
}
int main(){
    cout<<"Printing";
    printNum(5);
    cout<<"   ";
    cout<<"OK";

return 0;
}
