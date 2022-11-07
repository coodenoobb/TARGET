#include<bits/stdc++.h>
using namespace std;
void merge(int arr[],int l,int h){
    
    int mid = (l+h)/2;

    int len1 = mid-l+1;
    int len2 = h-mid;

    int *first = new int[len1];
    int *second = new int[len2];

    //copy values
    int mainIndex = l;
    for(int i=0; i<len1; i++){
        first[i] = arr[mainIndex++];
    }
    mainIndex = mid+1;
    for(int i=0;i<len2;i++){
        second[i]=arr[mainIndex++];
    }

    // merge 2 sorted arrays

    int i=0;
    int j=0;
    mainIndex = l;

    while(i<len1 && j<len2){
        if(first[i]<second[j]){
            arr[mainIndex++] = first[i++];
        }
        else{
            arr[mainIndex] = second[j++];
        }
    }
    while(i<len1){
        arr[mainIndex++] = first[i++];
    }

    while(j<len2){
        arr[mainIndex++] = second[j++];
    }


}

void mergeSort(int arr[],int l,int h){

    // base case
    if(l>h){
        return;
    }

    int mid = (l+h)/2;

    mergeSort(arr,l,mid);       // left side
    mergeSort(arr,mid+1,h);     // right side

    merge(arr,l,h);             // merge two sorted array


}
void print(int arr[], int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}

int main(){

    int arr [6] = {20,2,5,60,6,80};

    print(arr,6);
    cout<<endl;
    mergeSort(arr,0,6);
    print(arr,6);

return 0;
}