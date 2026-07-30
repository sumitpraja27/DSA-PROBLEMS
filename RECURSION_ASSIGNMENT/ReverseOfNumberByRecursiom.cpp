#include <iostream> 
using namespace std;
int reverse(int n){
    static int ans = 0;
// base case 
if(n<=0) return ans;
int digit = n%10;
ans = ans*10 + digit;
reverse(n/10);
}
int main(){
    int num = 234;
    cout<<reverse(num);
}