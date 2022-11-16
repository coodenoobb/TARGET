#include<bits/stdc++.h>
using namespace std;

void helper(string digits, string output, int index, vector <string> &ans, string keypad[]){
        //base condition
        if(index>=digits.length()){
            ans.push_back(output);
            return;
        }

        // to get the index in the mapping
        // e.g => to get 2 from digits = "23"
        int num = digits[index] - '0';
        string dial = keypad[num];

        for(int i=0;i<dial.length();i++){
            output.push_back(dial[i]);
            helper(digits,output,index+1,ans,keypad);
            output.pop_back();
        }


    }

vector<string> letterCombinations(string digits) {
        // mapping the alphabets with the digits from 0-9
        string keypad[10] = {"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
        vector <string> ans;
        string output;
        int index = 0;

        if(digits.length()==0){
            return ans;
        }
        
        helper(digits,output,index,ans,keypad);
        
        return ans;


    }


int main(){

    string digits = "23";
    vector <string> stri = letterCombinations(digits);
    
    for(auto it : stri){
        cout<<it<<" ";
    }

    return 0;

}