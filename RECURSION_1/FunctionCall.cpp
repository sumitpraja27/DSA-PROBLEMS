#include <iostream>
using namespace std;
int product(int a, int b){
    return a*b;
}
    void morning(int n){
        if(n==0) return;
        cout<<"Good Morning"<<endl;
        morning(n-1);
    }

int main(){
    cout<<product(2,4);
    cout<<endl;
    // int a = 6;
    // int b = 8;
    // swap(a,b);
    // cout<<endl;
    // cout<<a<<" "<<b<<endl;
    // max(a,b);
    // cout<<max(a,b)<<endl;
    // min(a,b);
    // cout<<min(a,b)<<endl;
    int p;
    cout<<"Enter the no. of times to print GM:"<<endl;
    cin>>p;
    morning(p);
}