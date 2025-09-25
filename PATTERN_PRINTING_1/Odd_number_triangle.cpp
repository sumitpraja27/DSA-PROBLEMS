#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number :";
    cin>>n;
    // for(int i = 1; i<=n; i++){
    //     for(int j = 1; j<=2*i-1; j = j+2){
    //         cout<<" "<<j;  
    //     }
    //     cout<<endl;
    // }
// METHOD 2 ..............

for(int i = 1; i<=n; i++){
    // first i odd number......
    int a = 1;
    for(int j = 1; j<=i; j++){
        cout<<" "<<a;
        a = a+2;
    }
    cout<<endl;
}
}