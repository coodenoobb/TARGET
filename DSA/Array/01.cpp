#include<bits/stdc++.h>
using namespace std;
void printArray(int arr[],int size){
    cout<<"Printing the Array"<<endl;

    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    
    // // std::array<int,100> arr; 
    // // arr.fill(-20);

    // // fill_n(arr,100,-69);
    // cout<<"Value is  : " <<arr[59];

    // int arr[5] ={ 10,20,30,40,50};

    // for(int i=0;i<5;i++){
    //     cout<<arr[i]<<" ";
    // }

    int arr[6] = {-60};
    printArray(arr,6);
return 0;
}