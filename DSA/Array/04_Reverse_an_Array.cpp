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


void reverseArray(int arr[],int size){     // T.C : O(n)
    int l = 0;
    int h = size-1;

    while(l<=h){
        swap(arr[l],arr[h]);
        l++;
        h--;       
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
    
    reverseArray(arr,size);
    printArray(arr, size);

return 0;
}