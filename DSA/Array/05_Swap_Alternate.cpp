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

void swapAlternate (int arr[],int size){

    for(int i=0;i<size-1;i++){
        swap(arr[i],arr[i+1]);
        i++;
    }
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

    swapAlternate(arr,size);
    printArray(arr,size);

return 0;
}