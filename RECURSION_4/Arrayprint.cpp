#include <iostream> 
using namespace std;
void print(int arr[], int n, int idx){
// base case
if(idx==n)  return;
    cout<<arr[idx]<<" ";

print(arr,n,idx+1);
}
int main(){
    int arr[] = {2,1,4,6,7,8,3,4,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    print(arr,n,0);
}