#include<bits/stdc++.h>
using namespace std;
int countDistinctWays(int nStairs) {
    
    if(nStairs<0){
        return 0;
    }
    
    else if(nStairs==0){
        return 1;
    }
    
    cout<<nStairs<<" ";
    return countDistinctWays(nStairs-1) + countDistinctWays(nStairs-2);
    
        
}
int main(){

    int ans = countDistinctWays(4);
    cout<<endl;
    cout<<ans;
return 0;
}