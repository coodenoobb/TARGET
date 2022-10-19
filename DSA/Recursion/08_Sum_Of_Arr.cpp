#include<bits/stdc++.h>
using namespace std;
int sumArr(int arr[],int size){
    
    if(size == 0){
        return 0;
    }

    return arr[size-1] + sumArr(arr,size-1);

}
int main(){
    int arr[5] = {11,2,3,4,5};
    cout<<sumArr(arr,5);
return 0;
}