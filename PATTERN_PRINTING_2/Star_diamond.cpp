#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number :";
    cin>>n;
    for(int i = 1; i<=2*n-1; i++){
        // spaces....
for(int j = 1; j<=n-i; j++){
    cout<<" ";
}// star....
for(int k=1; k<=2*i-1; k++){
    cout<<"*";
}
cout<<endl;
    }
} 
