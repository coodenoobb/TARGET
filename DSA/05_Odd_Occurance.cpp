#include<bits/stdc++.h>
using namespace std;
int main(){

    int arr [7] = {1,1,1,5,5,8,8};
    int ans =0;

    for(int i=0;i<7;i++){
       ans = ans ^ arr[i];
    }

    cout<<"Answer is "<<ans;
    cout<<"Good JOb";
    cout<<"I am in branch BOT1";

return 0;
}