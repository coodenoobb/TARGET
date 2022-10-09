#include<bits/stdc++.h>
using namespace std;
int main(){

    //creation
    unordered_map <string,int> mp;

    //insertion
    pair<string , int> pr = make_pair("Hello" , 3);
    mp.insert(pr);


    pair<string , int> pr2 ("Good",2);    
    mp.insert(pr2);

    mp["Game"] = 5;         // It will be created  (Game, 5);

    mp["Game"] = 10;        // It will be updated  (Game, 10);  
                            //There is only one value for each KEY it will be updated when new value is added


    cout<<mp["Good"]<<endl;
    cout<<mp.at("Game")<<endl;

    cout<<"Size of map "<<mp.size()<<endl;

    cout<<"Count "<<mp.count("Game")<<endl;
    cout<<"Count "<<mp.count("Hi")<<endl;

    mp.erase("Hello");
    cout<<mp.size()<<endl;

    // for(auto it : mp){
    //     cout<<it.first<<" "<<it.second<<endl;
    // }



    // Iterator

    unordered_map <string,int> :: iterator it = mp.begin();

    while(it != mp.end()){
        cout<<it->first<<" "<<it->second<<endl;
        it++;
    } 








return 0;
}