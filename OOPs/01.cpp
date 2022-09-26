#include<bits/stdc++.h>
using namespace std;
class Hero{

    public:

    int health;
    int level;

    Hero(){
        cout<<"Object created"<<endl;
    }

    Hero( int health){
        this->health = health;
        cout<<"Health is "<<health<<endl;
    }

};
int main(){

    Hero h1;

    Hero *h2 = new Hero;

    Hero h3(500);

    Hero h4(h3);
    

    // h1.health = 80;
    // h1.level = 5;

    // cout<<"Health is "<<h1.health<<" and level is "<<h1.level;
return 0;
}