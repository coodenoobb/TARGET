#include<bits/stdc++.h>
using namespace std;
int main(){

    int a = 10;
    cout<<"a : "<<a<<endl;

    // creating a reference variable
    int &b = a;
    cout<<"b : "<<b<<endl;

    int c = a;

    b++;
    cout<<"a : "<<a<<endl;

    c++;
    cout<<"c : "<<c<<endl;

    cout<<"a : "<<a<<endl;

return 0;
}