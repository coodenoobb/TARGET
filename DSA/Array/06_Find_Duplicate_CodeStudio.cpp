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
int findDupli(int arr[],int size){
    int ans = 0;
    for(int i=0;i<size;i++){
        ans = ans^arr[i];
    }

    for(int i=0;i<size;i++){
        ans = ans^i;
    }

    return ans;
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

    int ans = findDupli(arr,size);

    cout<<"Duplicate is : "<<ans;

return 0;
}