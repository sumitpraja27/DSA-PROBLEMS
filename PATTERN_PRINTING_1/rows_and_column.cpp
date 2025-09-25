#include <iostream>
using namespace std;
int main(){
 int n;
 cout<<"Enter the rows :";
 cin>>n;
 int m;
 cout<<"Enter the columns :";
 cin>>m;
 for(int i = 1; i<=n; i++){
    for(int i = 1; i<=m; i++){
        cout<<" * ";
    }
    cout<<endl;
 }
}