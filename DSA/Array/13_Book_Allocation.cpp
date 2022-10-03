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

bool isPossible(int arr[],int size,int stud,int mid){
    int st = 1;
    int pageSum = 0;

    for(int i=0;i<size;i++){
        pageSum = pageSum + arr[i];

        if(pageSum>mid){
            st++;
            pageSum = arr[i];
        }
    }
    return st<=stud;
}

int allocateBooks(int arr[],int size, int stud){

    int maxi = INT_MIN;                                                         
    int sum = 0;

    for(int i=0;i<size;i++){
        sum +=arr[i];
        maxi = max(maxi,arr[i]);
    }

    int l = maxi;
    int h = sum;
    int ans = -1;

    int mid = l+(h-l)/2;

    while(l<=h){
        if(isPossible(arr,size,stud,mid)){
            ans = mid;
            h = mid - 1;
        }
        else{
            l = mid + 1;
        }
        mid = l+(h-l)/2;
    }

    return ans;


}
int main(){

    int size;
    
    cout << "Enter Pages in the books : ";
    cin >> size;
    int arr[20];

    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    printArray(arr, size);
    cout << endl;

    int stud;
    cout<<"Enter number of students : ";
    cin>>stud;

    cout<<endl;

    int result = allocateBooks(arr,size,stud);
    cout<<"Min of Max Pages will be : "<<result<<endl;



return 0;
}
