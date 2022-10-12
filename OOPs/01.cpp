#include<bits/stdc++.h>
using namespace std;
// Creation of class
class Hero{
    private:
        int health;
    
    public:
        int power;

        int getHealth(){
            return health;
        }
        void setHealth(int h){
            health = h;
        }



};

int main(){
    
    // creation of Object
    Hero h1;

    
    h1.power = 7;

    // Accessing Private members
    h1.setHealth(20);
    cout<<"Health "<<h1.getHealth();

 


return 0;
}