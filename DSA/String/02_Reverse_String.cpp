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

void reverseString(char chr[], int len){

    int l = 0;
    int h = len-1;

    while(l<=h){
        swap(chr[l++],chr[h--]);
    }

}
int main(){

    char ch[20];

    cout<<"Enter Something "<<endl;
    cin>>ch;

    cout<<"-----> "<<ch<<endl;
    int len = getLength(ch);
    cout<<"Length of Array is "<<len<<endl;

    reverseString(ch,len);
    cout<<"-----> "<<ch<<endl;




    

return 0;
}