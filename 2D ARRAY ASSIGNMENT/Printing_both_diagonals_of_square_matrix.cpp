#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of square matrix: ";
    cin>>n;
    int arr[n][n];

    cout<<"Enter the elements of matrix arr: "<<endl;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin>>arr[i][j];
        }
    }
cout<<"The elements of diagonals are: "<<endl;
     
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if((i==j) or (i+j == n-1))
            cout<<arr[i][j]<<" ";
            else cout<<"  ";
        }
        cout<<endl;
    }
}