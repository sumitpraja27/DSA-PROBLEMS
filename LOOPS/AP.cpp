#include<iostream>
using namespace std;
int main(){
    
int n;
cout<<"Enter a number :"<<endl;
    cin>>n;
    for(int i = 1; i<=2*n-1; i+=2){// 1 3 5 7 9....
       cout<<i<<endl;
    }


int a = 1;
    for(int i = 1; i<=n; i++){// 1 4 7 10....
        cout<<a<<endl;
        a = a+3;
    }
}        