#include<bits/stdc++.h>
using namespace std;
char getMaxx(string str){

    int arr[26] = {0};


    // Array of counts

    for(int i=0; i<str.length();i++){
        char ch = str[i];
        int index = 0;
        if(ch>='a' && ch<='z'){
            index = ch - 'a';
        }
        else{
            index = ch - 'A';
        }
        arr[index]++;
    }

    int maxi = -1;
    int ans = -1;
    for(int i = 0;i<26;i++){
        if(maxi<arr[i]){
            ans = i;
            maxi = arr[i];
        }
    }

    char res = 'a'+ans;

    return res;

}
int main(){

    string str;
    cout<<"Enter string : ";
    cin>>str;

    cout<<endl;

    cout<<getMaxx(str);


return 0;
}
