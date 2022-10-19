#include<bits/stdc++.h>
using namespace std;
int powerNum(int num, int p){

    if(p==0){
        return 1;
    }
    else
        return (num * powerNum(num,p-1));
    
}
int main(){

    int base = 2, pow = 10;

    int ans = powerNum(base,pow);
    cout<<"ans " <<ans;

    return 0;
}