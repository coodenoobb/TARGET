#include<bits/stdc++.h>
using namespace std;
void printPattern(int row, int col){
    
    if(row==0){
        return ; 
    }
    if(row>col){
        cout<<"*"<<" ";
        printPattern(row, col+1);
    }
    else{
        cout<<endl;
        printPattern(row-1,0);
    }

}
int main(){
    int num = 4;
    printPattern(num,0);
    cout<<"DAMN LUCK";
return 0;
}