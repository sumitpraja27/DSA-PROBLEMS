#include <iostream> 
using namespace std;
int odd(int n){
    // base case 
    if(n==0) return 0;
    // recursive call
    odd(n-1);
    if(n%2!=0){
    cout<<n<<endl;
    }
}
int main(){
    odd(10);
}