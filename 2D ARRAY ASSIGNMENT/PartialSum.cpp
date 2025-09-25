#include <iostream>

using namespace std;
int main(){
    int n,m;
    cout<<"Enter values of n and m: ";
    cin>>n>>m;
    int a[n][m];
    for(int i = 0; i<n; i++){
        for(int j=0; j<m; j++){
            cout<<"Enter value of a["<<i<<"]["<<j<<"]: ";
            cin>>a[i][j];
        }
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    int l1,r1,l2,r2;
    cout<<"Enter l1,r1,l2,r2: ";
    cin>>l1>>r1>>l2>>r2; 
int sum = 0;
    for(int i = min(l1,l2); i<=max(l1,l2); i++){
        for(int j = min(r1,r2); j<=max(r1,r2); j++){
            sum += a[i][j];
        }
        cout<<sum<<endl;
    }
}