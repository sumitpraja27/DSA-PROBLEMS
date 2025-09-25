#include<iostream>
using namespace std;
int fun(int x = 4, int y = 5){ // 4 and 5 are default arguments..............
cout<<x<<" "<<y;
}
int main(){
    int x;
    int y;
    fun(5);
}