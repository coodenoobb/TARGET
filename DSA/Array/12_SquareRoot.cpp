#include<bits/stdc++.h>
using namespace std;
int intSqr(int n){
        
        int l = 0;
        int h = n;
        
        long long int mid = l+(h-l)/2;
        long long int ans = -1;
        
        while(l<=h){
            
            long long int sqr = mid * mid;
            
            if(sqr==n){
                
                return mid;
            }
            
            else if(sqr<n){
                ans = mid;
                l = mid + 1;
            }
            else{
                h = mid - 1;
            }
            mid = l+(h-l)/2;
        }
        return ans;
    }

double decSqr(int n, int digit, int temp){

    double factor = 1;
    double ans = temp;

    for(int i=0;i<digit;i++){
        factor = factor /10;

        for(double j=ans;j*j<n;j = j+factor){
            ans = j;

        }
    }
    return ans;
}
int main(){

    int n,dig;
    cout<<"Enter a number : ";
    cin>>n;
    cout<<endl;

    cout<<"Enter after decimal digits : ";
    cin>>dig;

    int temp = intSqr(n);

    cout<<"Square Root of the number is "<<decSqr(n,dig,temp);


return 0;
}