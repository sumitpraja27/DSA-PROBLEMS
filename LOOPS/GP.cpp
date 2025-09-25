#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number :"<<endl;
    cin>>n;
    int a = 1;
    for(int i = 1; i<=n; i++){// 1 2 4 8 16 32 64....
        cout<<a<<endl;
        a = a*2 ;
    }
}