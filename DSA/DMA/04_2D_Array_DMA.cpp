#include<bits/stdc++.h>
using namespace std;
int main(){

    int row,col;
    cin>>row>>col;
    int ** arr = new int* [row];

    // Creating 2D array
    for(int i=0; i<row;i++){
        arr[i] = new int[row];
    }

    // Taking Input
    for(int i=0; i<row;i++){
       for(int j=0; j<col;j++){
            cin>>arr[i][j];
        }
    }

    // Giving Output
    for(int i=0; i<row;i++){
       for(int j=0; j<col;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    // Releasing 2D Memory
    for(int i=0; i<row;i++){
        delete arr[i];
    }

    // Releasing the first col

    delete arr;


return 0;
}