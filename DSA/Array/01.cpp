#include<bits/stdc++.h>
using namespace std;
void printArray(int arr[],int size){
    cout<<"Printing the Array"<<endl;

    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    
    // // std::array<int,100> arr; 
    // // arr.fill(-20);

    // // fill_n(arr,100,-69);
    // cout<<"Value is  : " <<arr[59];

    // int arr[5] ={ 10,20,30,40,50};

    // for(int i=0;i<5;i++){
    //     cout<<arr[i]<<" ";
    // }

    int arr[6] = {-60};
    printArray(arr,6);
return 0;
}



//////////////////////////////////////
class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        
        vector <int> res;
        int size = arr.size();
        
        int i=0;
        
        sort(arr.begin(),arr.end());
        
        while(i<size){
            int count = 1;
            
            for(int j = i+1;j<size;j++){
                if(arr[i]==arr[j]){
                    count++;
                }
            }
            res.push_back(count);
            i=i+count;
        }
        
        sort(res.begin(),res.end());
        
        for(int i=0;i<res.size();i++){
            if(res[i]==res[i+1]){
                return false;
            }
        }
        return true;
        
    }
};