#include<bits/stdc++.h>
using namespace std;
void bubbleSort(int arr[],int start, int size){
    if(size==0 || size ==1){
        return;
    }

    if(start<size){
        if(arr[start]>arr[start+1]){
            swap(arr[start],arr[start+1]);
            bubbleSort(arr,start+1,size-1);
        }
        else{
            bubbleSort(arr,start+1,size-1);
        }
    }

    
}
void printArray(int arr[], int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int arr[6] = {20,30,10,50,40,60};
    printArray(arr,6);
    bubbleSort(arr,0,6);
    cout<<endl;
    printArray(arr,6);

return 0;
}