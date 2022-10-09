#include<bits/stdc++.h>
using namespace std;
int maximumFrequency(vector<int> &arr)
{
    unordered_map <int,int> mp;

    int maxFreq = INT_MIN;
    int ans = 0;

    for(int i=0;i<arr.size();i++){
        mp[arr[i]]++;
        maxFreq = max(maxFreq,mp[arr[i]]);
    }

    for(int i = 0;i<arr.size();i++){
        if(maxFreq==mp[arr[i]]){
            ans = arr[i];

        break;    
        }
    }
    return ans;

    
}
int main(){

    vector <int> arr = {1,2,3,1,2,3,3};
    int res = maximumFrequency(arr);

    cout<<"Maximum occuring element is "<<res<<endl;




return 0;
}