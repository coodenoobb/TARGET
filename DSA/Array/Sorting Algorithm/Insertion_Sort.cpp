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

void selectionSort(int arr[], int size){
    
    for(int i=0;i<size;i++){
        int minIndex = i;

        for(int j=i+1;j<size;j++){

            if(arr[minIndex]>arr[j]){
                minIndex = j;
            }
        }
        swap(arr[i],arr[minIndex]);
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

    
    selectionSort(arr,size);

    printArray(arr,size);


return 0;
}