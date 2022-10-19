#include<bits/stdc++.h>
using namespace std;
bool isSorted(int *arr,int size){
    if(size==0 || size==1){
        return true;
    }

    return arr[0]<arr[1] && isSorted(arr+1,size-1);
}
int main(){

    int arr[5] = {10,20,30,40,50};

    cout<<isSorted(arr,5);
return 0;
}
