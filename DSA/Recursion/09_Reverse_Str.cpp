#include<bits/stdc++.h>
using namespace std;
void revStr(string &str, int l, int h){

    if(l>h){
        return ;
    }
    swap(str[l],str[h]);
    l++;
    h--;

    return revStr(str,l,h);

}
int main(){
    string s = "Laptop";
    int l = 0, h =s.length()-1;

    revStr(s,l,h);
    cout<<s;
   


return 0;
}