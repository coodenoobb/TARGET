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
    
    // Static
    Hero h1;

    h1.power = 10;
    h1.setHealth(9);
    cout<<"h1.power "<<h1.power<<endl;
    cout<<"h1.getHealth() "<<h1.getHealth()<<endl;

    cout<<sizeof(h1)<<endl;

    // DMA
    Hero *h2 = new Hero;

    (*h2).power = 6; 
    h2->power = 7;
    (*h2).setHealth(4);
    cout<<"(*h2).power "<<(*h2).power<<endl;
    cout<<"(*h2).getHealth() "<<(*h2).getHealth()<<endl;

    cout<<sizeof(*h2)<<endl;



 


return 0;
}