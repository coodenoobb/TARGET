#include<bits/stdc++.h>
using namespace std;
bool checkPower(int n){

    int count = 0;

    while(n!=0){
        int bit = n&1;

        if(bit==1){
            count++;
        }
        n>>=1;

    }
    return count==1;

}

int main(){

    int n;
    cout<<"Enter a number : ";
    cin>>n;

    cout<<" Is power of 2 ? "<<checkPower(n);
return 0;
}