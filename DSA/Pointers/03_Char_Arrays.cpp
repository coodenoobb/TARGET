#include<bits/stdc++.h>
using namespace std;
int main(){

    char ch[6] = "abcde";
    int arr[5] = {1,2,3,4,5};

    cout<<arr<<endl;
    cout<<ch<<endl;

    int *ptrA = &arr[0];
    cout<<ptrA<<endl;

    char *ptrC = &ch[0];
    cout<<ptrC<<endl;

    char temp = 'h';
    char *p = &temp;    // It will search for null , when it will  find null it will stop
    cout<<p<<endl;

return 0;
}