#include<iostream>
 using namespace std;
 int main(){
    int m;
    cout<<"Enter the no. of rows:";
    cin>>m;
    int n;
    cout<<"Enter the no. of columns:";
    cin>>n;
    int arr[m][n];
    for(int i=0; i<=m-1; i++){
        for(int j=0; j<=n-1; j++){
            cin>>arr[i][j];
        }
        cout<<endl;
    }
    // print 
    for(int i=0; i<=m-1; i++){
        for(int j=0; j<=n-1; j++){ 
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    // Transpose in the same matrix
for(int i=0;i<m; i++){// rows
    for(int j=i+1; j<n; j++){ // columns
       // swappping of i,j and j,i
       int temp = arr[i][j];
       arr[i][j] = arr[j][i];
       arr[j][i] = temp;
    }
}
// printing the transpose
for(int i=0; i<m; i++){
    for(int j=0; j<m; j++){
        cout<<arr[i][j]<<" ";
    }
    cout<<endl;
}
 }