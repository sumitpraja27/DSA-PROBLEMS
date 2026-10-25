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

int addScore(Player a, Player b){// We can use objects of a class as a parameters while defining a  function.
    return a.getScore()+b.getScore();
}   

Player getMaxScorePlayer(Player a, Player b){
    if(a.getScore()>b.getScore()){
        return a;
    }else return b;   
}

int main(){
    Player harsh;
    Player raghav;

    Player *urvi = new Player;

    harsh.setHealth(70);
    harsh.setAge(21);
    harsh.setScore(100);
    harsh.setIsAlive(true);

    raghav.setHealth(100);
    raghav.setAge(22);
    raghav.setScore(20);
    raghav.setIsAlive(true);

    cout<<harsh.getHealth();
    cout<<endl;
    cout<<harsh.getAge();
    cout<<endl;
    cout<<harsh.getScore();
    cout<<endl;
    cout<<harsh.getIsAlive();
    cout<<endl;
    cout<<addScore(harsh,raghav );
    cout<<endl;
    Player sanket = getMaxScorePlayer(harsh,raghav);
    cout<<sanket.getScore();

    
}
