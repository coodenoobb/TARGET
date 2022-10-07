#include<bits/stdc++.h>
using namespace std;
bool isPresent(int arr[] [3],int m,int n, int key){

     for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(arr[i][j]==key){
                return true;
            };
        }
    }
    return false;
}
int main(){

    int arr[3][3];
    int key;
    cout<<"Enter values : "<<endl;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cin>>arr[i][j];
        }
    }
    cout<<endl;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    cout<<"Enter key to be found : ";
    cin>>key;

    bool ans = isPresent(arr,3,3,key);
    cout<<"Is present ? "<<ans;



return 0;
}