#include<bits/stdc++.h>
using namespace std;
int getLength(char chr[]){

    int count = 0;
    int i = 0;

    while(chr[i]!='\0'){
        count++;
        i++;
    }
    return count;
}

int main(){

    char ch[20];

    cout<<"Enter Something "<<endl;
    cin>>ch;

    cout<<"-----> "<<ch<<endl;
    int len = getLength(ch);
    cout<<"Length of Array is "<<len<<endl;



    

return 0;
}