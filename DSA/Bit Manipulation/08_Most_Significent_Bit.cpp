// The most-significant bit in binary representation of a number is the highest ordered bit,
// that is it is the bit-position with highest value.

#include<bits/stdc++.h>
using namespace std;
int findLog(int n){

    int res = 0;
    while(n!=1){   // n>>=1
        res++;
        n>>=1;
    }
    return res;

}

int main(){
    int num ;
    cout<<"Enter a number : ";
    cin>>num;

    //cout<<findLog(num);

    int ans = pow(2, findLog(num));

    cout<<ans;

return 0;
}