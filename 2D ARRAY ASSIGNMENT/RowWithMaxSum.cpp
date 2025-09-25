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
    cout<<"Enter the elements of matrix arr:";
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin>>arr[i][j];
        }
        cout<<endl;
    }
    
    int max = INT8_MIN;
    int index = -1;
    for(int i=0; i<n; i++){
        int sum=0;
        for(int j=0; j<m; j++){
            sum += arr[i][j]; 
        }
        if(max<sum) max = sum;
        index = i;
    }
    cout<<"The row with maximum sum is: "<<index;

}