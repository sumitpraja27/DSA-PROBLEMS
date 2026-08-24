#include <iostream>
using namespace std;
int pow(int x, int n){
    // base case
    if(n==1) return x;
    
    // recursive call 
    int ans = pow(x,n/2);
    if(n%2==0){
        return pow(x,n/2) * pow(x,n/2);
    }
    if(n%2!=0){
        return pow(x,n/2)*pow(x,n/2)*x;
    }
    return ans*ans;
}
int main(){
    cout<<pow(3,6);
}