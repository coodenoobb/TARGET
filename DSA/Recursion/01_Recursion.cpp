#include<bits/stdc++.h>
using namespace std;


void sayHello3(){
    cout<<"Hello 3 "<<endl;
}
void sayHello2(){
    cout<<"Hello 2 "<<endl;
    sayHello3();
}
void sayHello1(){
    cout<<"Hello 1 "<<endl;
    sayHello2();
}
void sayHello(){
    cout<<"Hello  "<<endl;
    sayHello1();
}


int main(){

    sayHello();

return 0;
}