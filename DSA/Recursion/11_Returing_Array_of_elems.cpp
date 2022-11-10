#include<bits/stdc++.h>
using namespace std;
vector<int>  isSorted (int arr[], int index,int size,vector<int> ans,int key){
    
        if(index == size){
            return ans;
        }
        if(arr[index]==key){
            ans.push_back(index);
        }
   return isSorted(arr,index+1,size,ans,key);
    

    

}
int main(){
    int arr[6] = {10,20,30,30,50,30};
    vector<int> vec(0);

    

    vector <int> arr2 = isSorted(arr,0,6,vec , 30);

    for(auto it : arr2){
        cout<<it<<" ";
    }

return 0;
}