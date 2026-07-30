#include <iostream> 
using namespace std;
// int hcf(int a, int b){
//     for(int i=min(a,b); i<=2; i--){
//         if(a%i==0 && b%i==0) return i;
//     }
//     return 1;
// }


// GCD by using RECURSION
    int gcd(int a, int b){ //T.C = O(log(a+b))
    if(a==0) return b;
    else return gcd(b%a,a);  
    }

int main(){
    int a = 27;
    int b = 45;
    cout<<gcd(a,b);
}