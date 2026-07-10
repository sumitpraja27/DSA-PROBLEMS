#include <iostream>
using namespace std;
int power(int a, int b){
    if(a==0 && b==0)
    cout<<"0 raised to the power 0 is not defined.";

    if(a==0) return 0;
    int p = 1;
    for(int i=0; i<=b; i++){
    p *= a;
    }
    return p;
}
int pow(int a, int b){
    if(b==0) return 1;
    return a*pow(a,b-1);
}
int main(){
    //cout<<power(2,5);
    int a;
    cout<<"Enter the base:";
    cin>>a;
    int b;
    cout<<"Enter the exponent:";
    cin>>b;
    cout<<a<<" raised to the power of "<<b<<" is: "<<pow(a,b);


}
