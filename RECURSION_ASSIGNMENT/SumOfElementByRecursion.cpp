#include <iostream>
using namespace std;
int sumOfEle(int arr[], int n, int idx, int sum){
    // base case 
    if(idx==n) return sum;

    // recursive call
    sumOfEle(arr,n,idx+1,sum+arr[idx]);
}
int main(){
int arr[] = {4,3,2,5,8,7,1};
int n = sizeof(arr)/sizeof(arr[0]);
int sum;
cout<<sumOfEle(arr,n,0,0);
}