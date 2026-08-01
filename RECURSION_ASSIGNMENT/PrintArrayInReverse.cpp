#include <iostream>
using namespace std;
void printReverse(int arr[], int n, int idx){
    // base case 
    if(idx==n) return;

    //recursive call
    printReverse(arr,n,idx+1);
    cout<<arr[idx]<<" ";
}
int main(){
    int arr[]  ={2,6,7,4,9,1,6,8};
    int n = sizeof(arr)/sizeof(arr[0]);
    printReverse(arr,n,0);
}