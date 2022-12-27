#include<bits/stdc++.h>
using namespace std;
int main(){
    
    queue<int> qu;

    qu.push(20);
    qu.push(65);
    qu.push(34);

    cout<<qu.size()<<endl;

    qu.pop();
    cout<<qu.size()<<endl;

    
return 0;
}