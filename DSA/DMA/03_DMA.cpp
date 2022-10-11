#include<bits/stdc++.h>
using namespace std;
int getSum(int *arr,int n){
    int sum = 0;
    for(int  i = 0;i<n; i++){
        sum += arr[i];
    }
    return sum;
}
int main(){

    // int a = 20;
    // cout<<"Size of a "<<sizeof(a)<<endl;

    // int *b = new int;
    // cout<<"Size of b "<<sizeof(b)<<endl;

    int n ;
    cout<<"Enter size : ";
    cin>>n;


    

    // Variable size array using dynamic allocation
    int *arr = new int[n];

    for(int i=0;i<n;i ++){
        cin>>arr[i];
    }
    int ans = getSum(arr,n);
    cout<<ans<<endl;

return 0;
}