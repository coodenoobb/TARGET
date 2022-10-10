#include<bits/stdc++.h>
using namespace std;
int main(){
    int a = 10;
    double d = 156.6;
    cout<<"Address of a is "<<&a<<endl;

    int *ptr = &a;
    double *ptr1 = &d;

    cout<<"Address of a is "<<&a<<endl;
    cout<<*ptr<<endl;

    cout<<"Address of d is "<<&d<<endl;
    cout<<*ptr1<<endl;


return 0;
}