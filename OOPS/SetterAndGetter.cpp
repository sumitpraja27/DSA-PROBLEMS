#include <iostream> 
using namespace std;
class Player{
private:
int score; // data members
int health;// data members

public:
// Setter
void setScore(int s){
    score = s;
}
void setHealth(int h){
    health = h;
}

// Getter
int getScore(){
    return score;
}
int getHealth(){
    return health; 
}
};

int main(){
    Player harsh;
    harsh.setScore(10);
    harsh.setHealth(90);
    cout<<harsh.getScore();
    cout<<endl;
    cout<<harsh.getHealth();
}