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

int binarySearch(int arr[],int size, int key){
    int l=0;
    int h=size-1;
    int mid = (l+h)/2;      // (l+(h-l)/2)

    while(l<=h){
        if(arr[mid]==key){
            return arr[mid];
        }
        else if(arr[mid]>key){
            h=mid-1;
        }
        else{
            l=mid+1;
        }
        mid= (l+h)/2;
    }
    return false;
}

int main(){

    int size;
    int key;
    cout << "Enter size of the array : ";
    cin >> size;
    int arr[20];

    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    printArray(arr, size);
    cout << endl;

    cout << "Enter element to be found ";
    cin >> key;

    int ans = binarySearch(arr,size,key);

    cout<<"Element Present ? "<<ans;


return 0;
}