#include<bits/stdc++.h>
using namespace std;
void colSum(int arr[][4],int row, int col){

    for(int col = 0;col<4;col++){
        int sum = 0;
        for(int row = 0;row<3;row++){
            sum += arr[row][col];
        }
        cout<<"Col wise sum is "<<sum<<endl;
    }

}


int main(){

    int arr[3][4];
    

    cout<<"Enter values : "<<endl;
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            cin>>arr[i][j];
        }
    }
    cout<<endl;
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    
    colSum(arr,3,4);

    



return 0;
}