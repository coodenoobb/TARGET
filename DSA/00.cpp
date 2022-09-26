#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number : "<<endl;
    cin>>n;
    int ans = 0;
    int i = 0;

    while(n!=0){

        int rem = n%2;
        cout<<"rem : "<<rem<<" ";
        ans =(rem *( pow(10,i)) )+ ans;

        cout<<" ANS "<<ans<<" ";
        n=n/2;
        cout<<" n = "<<n<<endl;
        i++;
        
    }
    cout<<ans;
return 0;
}