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

int firstOccurance(int arr[],int size,int k){
    int l=0;
    int h= size-1;
    
    int mid = l+((h-l)/2);
    int ans = -1;

    while(l<=h){
        if(arr[mid]==k){
            ans = mid;
            h = mid - 1;

        }

        else if(arr[mid]>k){
            h = mid - 1;
        }
        else{
            l = mid + 1;
        }

        mid = l+((h-l)/2);
    }
    return ans;
}
int lastOccurance(int arr[],int size,int k){
    int l=0;
    int h= size-1;
    
    int mid = l+((h-l)/2);
    int ans = -1;

    while(l<=h){
        if(arr[mid]==k){
            ans = mid;
            l = mid + 1;

        }

        else if(arr[mid]>k){
            h = mid - 1;
        }
        else{
            l = mid + 1;
        }

        mid = l+((h-l)/2);
    }
    return ans;
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


    int first = firstOccurance(arr,size,key);
    cout<<"First Occurance is at : "<<first;
    cout<<endl;

    int last = lastOccurance(arr,size,key);
    cout<<"First Occurance is at : "<<last;

    

return 0;
}