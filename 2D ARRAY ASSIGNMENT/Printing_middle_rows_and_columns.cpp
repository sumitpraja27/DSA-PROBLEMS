#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the no. of rows:";
    cin>>n;
    int m;
    cout<<"enter the no. of columns:";
    cin>>m;

    int arr[n][m];
    cout<<"Enter the elements of matrix arr:"<<endl;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin>>arr[i][j];
        }
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(i==n/2 or j==m/2)
            cout<<arr[i][j]<<" ";
            else cout<<"  ";
        }
        cout<<endl;
    }
}
