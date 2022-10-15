#include<bits/stdc++.h>
using namespace std;
void sortNeg (int arr[], int n){

    int l = 0;
    int h = n-1;

    while(l<h){
        
        if(arr[l]<0 && arr[h]<0)
            l++;

        else if(arr[l]>0 && arr[h]<0){
            swap(arr[l],arr[h]);
            l++;
            h--;
        }

        else if(arr[l]<0 && arr[h]<0)
            h--;

        else{
            l++;
            h--;
        }

    }

}

void printArray (int arr[],int size){

    for (int i=0;i<size;++i){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main(){

    int size = 7;
    int arr[size] = {-20,10,-3,-10,50,60,-1};

    printArray(arr,size);

    sortNeg(arr,size);
    printArray(arr,size);
    

return 0;
}