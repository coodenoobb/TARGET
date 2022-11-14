#include<bits/stdc++.h>
using namespace std;
void solve(vector<int> &nums, vector<int> output, int index, vector<vector<int>> &ans){
    //base
    if(index>=nums.size()){
        ans.push_back(output);
        return;
    }
    

    // exclude
    solve(nums,output,index,ans);

    //include
    int elem = nums[index];
    output.push_back(elem);
    solve(nums,output,index+1,ans);
}
vector<vector<int>> subset(vector<int> &nums){
    vector<vector<int>> ans;
    vector<int> output;
    int index = 0;
    solve(nums,output,index,ans);

    return ans;
}

int main(){
    vector <int> nums = {1,2,3};
    
    

    for(auto it : nums){
        cout<<it<<" ";
    }
   subset(nums);

   
return 0;
}