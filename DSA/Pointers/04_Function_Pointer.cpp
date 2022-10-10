#include<bits/stdc++.h>
using namespace std;
void print(int *p){
    cout<<p<<endl;
    cout<<*p<<endl;
}
void update(int *p){

    cout<<*p+1<<endl;
}
int main(){

    int a = 10;
    int *ptr = &a;

    print(ptr);

    update(ptr);

return 0;
}