#include <iostream> 
using namespace std;
int even(int n){
    // base case 
    if(n==0) return 0;
    // recursive call
    even(n-1);
    if(n%2==0){
    cout<<n<<endl;
    }
}
int main(){
even(10);
}