#include <iostream>
using namespace std;
int Sum(int n){
    // base case 
    if(n>=0 && n<=9) return n;
    int digit = n%10;
    return digit + Sum(n/10);
}
int main(){
int n = 4123;
cout<<Sum(n);
}