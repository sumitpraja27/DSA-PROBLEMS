#include <iostream>
#include <vector> 
using namespace std;
int main(){
int m;
cout<<"Enter rows of 1st matrix: ";
cin>>m;
int n;
cout<<"Enter columns of 1st matrix: ";
cin>>n;

int p;
cout<<"Enter rows of 2nd matrix: ";
cin>>p;
int q;
cout<<"Enter columns of 2nd matrix: ";
cin>>q;

if(n==p){
    // Taking 1st matrix elements from user
int a[m][n];
cout<<"Enter the elements of 1st matrix: "<<endl;;
for(int i=0; i<m; i++){
    for(int j=0; j<n; j++){
        cin>>a[i][j];
    }
}
    // Taking 2nd matrix elements from user
int b[p][q];
cout<<"Enter the elements of 2nd matrix: "<<endl;
for(int i=0; i<p; i++){
    for(int j=0; j<q; j++){
        cin>>b[i][j];
    }
}
// resultant matrix
int res[m][q];
for(int i=0; i<m; i++){
    for(int j=0; j<q; j++){
        res[i][j] = 0;
        // res[i][j] = a[i][0]*b[0]b[j] + a[i][1]*b[1][j ]....
        for(int k=0; k<p; k++){
            res[i][j] += a[i][k] * b[k][j];
        }
    }
}
cout<<"The resultant matrix is: "<<endl;
 // print
 for(int i=0; i<m; i++){
    for(int j=0; j<q; j++){
        cout<<res[i][j]<<" ";
    }
    cout<<endl;
 }
} else {  //n!=p
cout<<"The matrices cannot be multiplied: ";
}
}