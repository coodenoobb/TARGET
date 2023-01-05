#include<bits/stdc++.h>
using namespace std;

// Functiom template
template <typename T, typename T2>
T add(T a, T2 b){
    return a+b;
}

// Class template
template <typename T, typename T1>
class car{
    private:
        T value;
        T1 value1;

    public:
        void setData(T x, T1 y){
            value = x;
            value1 = y;
        }
        void getData(){
            cout<<this->value<<" "<<this->value1<<endl;
        }

};
int main(){
    cout<<add(5,6.3)<<endl;
    cout<<add(5.3,'a')<<endl;

    car <int,string> car1;
    car1.setData(101,"Tata");
    car1.getData();

    car <string,double> car2;
    car2.setData("BMW",236.64501);
    car2.getData();
return 0;
}