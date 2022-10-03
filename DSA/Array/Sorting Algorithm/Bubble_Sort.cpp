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

void bubbleSort(int arr[],int size){
    int n = size;
    for(int i=0;i<n;i++){
		bool swapped = false;
		for(int j=0;j<n-i-1;j++){
			if(arr[j]>arr[j+1]){
				swap(arr[j],arr[j+1]);
				swapped =true;
			}
		}
		if (swapped == false){
			break;
		}
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

    
    bubbleSort(arr,size);

    printArray(arr,size);


return 0;
}