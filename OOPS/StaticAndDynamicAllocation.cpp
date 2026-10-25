#include <iostream> 
using namespace std;
class Player{
private:

int health;
int age;
int score;
bool alive;

public:
int getHealth(){
    return health;
}

int getAge(){
    return age;
}

int getScore(){
    return score;
}

int getIsAlive(){
    return alive;
}

void setHealth(int health){
    this->health = health;
}

void setAge(int age){
    this->age = age;
}

void setScore(int score){
    this->score = score;
}

void setIsAlive(bool alive){
    this->alive = alive;
}
};

int main(){
    Player harsh;
    Player raghav;

    Player *urvi = new Player;// Dynamic Allocation -> works at the run time only. 

    // Static Allocation --> means initially assigning the values to variables at the time of creating the variables .

    harsh.setHealth(70);// Static allocation
    harsh.setAge(21);   // Static allocation
    harsh.setScore(100);// Static allocation
    harsh.setIsAlive(true);// Static allocation

    raghav.setHealth(100);// Static Allocation 
    raghav.setAge(22);    // Static Allocation 
    raghav.setScore(20);  // Static Allocation 
    raghav.setIsAlive(true);// Static Allocation 

    cout<<harsh.getHealth();
    cout<<endl;
    cout<<harsh.getAge();
    cout<<endl;
    cout<<harsh.getScore();
    cout<<endl;
    cout<<harsh.getIsAlive();
    cout<<endl;

    urvi->setHealth(20);

    cout<<"urvi "<<urvi->getHealth();
}