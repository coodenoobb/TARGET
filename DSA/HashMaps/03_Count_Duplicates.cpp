#include<bits/stdc++.h>
using namespace std;
void countDuplicate(vector<int>& nums, int k){

    unordered_map <int,int> mp;
    int ans = false;

    for(int i=0; i<nums.size(); i++){
        mp[nums[i]];
    }

    unordered_map <int,int> :: iterator it = mp.begin();

    while(it != mp.end()){
        cout<<it->first<<" "<<it->second<<endl;
        it++;
    } 



}
int main(){

    vector<int> arr = {1,2,3,1,2,3,3};
    int k = 2;

    countDuplicate(arr,k);

   
return 0;
}