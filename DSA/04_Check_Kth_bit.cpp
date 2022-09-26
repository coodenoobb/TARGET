#include<bits/stdc++.h>
using namespace std;
int main(){

// Right Shift 

    int n, k ;
    cout<<"Enter a number : ";
    cin>>n;
    cout<<endl;
    cout<<"Enter Kth place : ";
    cin>>k;

    n = n>>(k-1);
    int bit = n&1;

    if(bit==0){
        cout<<"NO"<<endl;
    }
    else{
        cout<<"YES";
    }



return 0;
}