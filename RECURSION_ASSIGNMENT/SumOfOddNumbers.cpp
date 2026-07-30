#include <iostream> 
using namespace std;
void sumofOdd(int arr[], int n, int idx){
    // base case 
    if(idx==n) return;
    // recursive call
    if(arr[idx]%2!=0){ 
    cout<<arr[idx]<<" ";
    }
    sumofOdd(arr,n,idx+1);
    


}
int main(){
int arr[] = {1,2,3,4,5,6,7,8};
int n = sizeof(arr)/sizeof(arr[0]);
sumofOdd(arr,n,0);
}