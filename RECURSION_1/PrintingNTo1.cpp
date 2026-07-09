#include <iostream> 
using namespace std;
int print(int n){
    // base case 
    if(n==0) return 0;
    //  recursive call
    cout<<n<<endl;// kaam
    print(n-1);
}
int main(){
    int p;
    cout<<"Enter the value of n to print from N to 1:";
    cin>>p;
    print(p);
}
