#include<iostream> 
using namespace std;
int main(){
    // declaration of 2d array
int arr[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
int brr[3][3] = {1,2,3,4,5,6,7,8,9};
    // rows -> 3 and index-> 0-2
    // columns-> 4 and index-> 0-3
  cout<<arr[0][0]<<endl;
  cout<<arr[0][2]<<endl;
  cout<<arr[1][2]<<endl;
  cout<<arr[2][1]<<endl;
  
  cout<<brr[0][0]<<endl;
  cout<<brr[0][2]<<endl;
  cout<<brr[1][2]<<endl;
  cout<<brr[2][1]<<endl;


} 