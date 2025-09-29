#include <iostream>
using namespace std;
int main(){
    // step 1 -> make the transpose of given matrix.
    // step 2 -> reverse the matrix from columns.
    int n;
    cout<<"Enter the no. of rows: ";
    cin>>n;
    int m;
    cout<<"Enter the no. of columns: ";
    cin>>m;

    int arr[n][m];
    cout<<"Enter the elements of matrix arr: "<<endl;
   for(int i=0; i<n; i++){
    for (int j=0; j<m; j++){
        cin>>arr[i][j];
    }
   }
   // for tranpose
   cout<<"The transpose of matrix arr is: "<<endl;
   for(int j=0; j<m; j++){
    for(int i=0; i<n; i++){
        cout<<arr[i][j]<<" ";
    }
    cout<<endl; 
} 

}