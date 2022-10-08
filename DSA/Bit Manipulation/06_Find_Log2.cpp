#include<bits/stdc++.h>
using namespace std;
int log2(int n){
    int count = 0;
    while(n = n>>1){
        count++;
    }
    return count;
}
int main(){

    int num;
    cout<<"Enter a number : ";
    cin>>num;

    int ans = log2(num);

    cout<<"Log2 (num) : "<<ans;

return 0;
}