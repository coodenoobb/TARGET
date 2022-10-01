#include<bits/stdc++.h>
using namespace std;
void printArray(int arr[], int size)
{
    cout << "Printing the Array" << endl;

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}
int findPivot(int arr[],int size){

    int l = 0 ;
    int h = size-1;

    int mid = l+(h-l)/2;

    while(l<h){
        if(arr[mid]>arr[0]){
            l = mid+1;
        }
        else{
            h = mid;
        }
        mid = l+(h-l)/2;
    }
    return arr[mid];
}
int main(){

    int size;
    
    cout << "Enter size of the array : ";
    cin >> size;
    int arr[20];

    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    printArray(arr, size);
    cout << endl;

    int ans = findPivot(arr,size);
    cout<<"Pivot elem is "<<ans;


return 0;
}