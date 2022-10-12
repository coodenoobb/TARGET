#include<bits/stdc++.h>
using namespace std;
// Creation of class
class Hero{
    private:
        int health;
        int rank;
    
    public:
        Hero(){
            cout<<"Constructor called "<<endl;
        }
        // Parameterised constructor
        Hero(int health, int rank){
            cout<<"this -> "<<this<<endl;
            this->rank = rank;
            this->health = health;
        }

        int power;

        int getHealth(){
            return health;
        }
        void setHealth(int h){
            health = h;
        }

        
};

int main(){
    
    // Static
    Hero h1(10,96);
    

    cout<<"Address of H1 -> "<<&h1<<endl; 
    

    
    

    

    


 


return 0;
}