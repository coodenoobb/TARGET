#include<bits/stdc++.h>
using namespace std;
int main(){
    int ans=0;
    int i=0;
    int n;
    cout<<"Enter Binary Number "<<endl;
    cin>>n;

    while(n!=0){

        int dig  = n%10; // because the number will be in bit 

        if(dig==1){
            ans = ans + pow(2,i);
        }
        n = n/10;
        i++;
    }
    cout<<ans<<endl;
return 0;
}