#include <iostream> 
using namespace std;
class Book{
public:
char name; 
int price;// data members  
int noOfPages;
int countBooks(int p){
if(price<p){
    return 1;
}
else return 0;
}

bool isBookPresent(char book){
    if(name==book){
        return true;
    }else return false;
} 
};

int main(){
    Book harryPotter;
    harryPotter.name = 'H';
    harryPotter.price = 900;
    harryPotter.noOfPages = 500;
    cout<<harryPotter.countBooks(1000);
}
