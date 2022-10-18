#include<bits/stdc++.h>
using namespace std;
int kadane(int arr[], int size){
    int ans = INT_MIN;
    int sum = 0;

    for(int i=0; i<size; i++){
        sum = sum+arr[i];

        if(sum>ans){
            ans = sum;
        }

        if(sum<0){
            sum=0;
        }
    }
    return ans;
}

int main(){
    
    int size;
    cout<<"Enter size of the Array : ";
    cin>>size;
    
    int arr[size];
    for(int i=0; i<size; i++){
        cin>>arr[i];
    }

    
    cout<<"Max sum value of Sub-Array is "<<kadane(arr,size);



return 0;
}