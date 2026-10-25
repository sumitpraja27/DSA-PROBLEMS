#include <iostream>
using namespace std; 
class Player{ //Class is always a Blueprint
    public:
    int score;  // Data members
    int health; // Data members
    char name[20];
    void showHealth(){ // member Function
        cout<<"Health is:"<<health;
    }
};

class Calculator{
    public:
    int a;// data members
    int b;// data members
    
    void add(){// Member function
        cout<<a+b;
    }
    void subtract(){// Member function
        cout<<a-b;
    }
};

int main(){
    Player sumit;// Here, Sumit is object of a class player.
    sumit.score = 90;
    sumit.health = 100;
    cout<<sumit.score<<endl;
    cout<<sumit.health<<endl;
    
    sumit.showHealth();
    cout<<endl;

    Calculator calci;
    calci.a = 5;
    calci.b = 7;
    calci.add();
    cout<<endl;
    calci.subtract();
}