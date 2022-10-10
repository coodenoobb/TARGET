#include<bits/stdc++.h>
using namespace std;
int main(){

    int arr[10] ={10,20,30,40,50};

    cout<<"Address of arr : "<<arr<<endl;
    cout<<"Address of arr[0] : "<<&arr[0]<<endl;
    cout<<"Address of *arr : "<<*arr<<endl;
    cout<<"Address of *(arr+1) : "<<*(arr+1)<<endl;
    cout<<"Address of *arr+1 : "<<*arr+1<<endl;

    cout<<"Size of arr "<<sizeof(arr)<<endl;
    cout<<"Size of arr[0] "<<sizeof(arr[0])<<endl;

    int *ptr = &arr[0];
    cout<<"Size of ptr "<<sizeof(ptr)<<endl;
    cout<<" &arr[0] : "<< &arr[0]<<endl;
    cout<<"Size of ptr "<<sizeof(&arr[0])<<endl;

    int *p = arr;
    p =p+1;

//    arr = arr+1;   will giver error


return 0;
}