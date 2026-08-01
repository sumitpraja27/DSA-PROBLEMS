#include <iostream> 
using namespace std;
int printIndex(int arr[], int n, int idx, int target){
// base case
if(idx==n) return -1;

// recursive call
if(arr[idx]==target)
return idx;
printIndex(arr,n,idx+1,target);


}
int main(){
    int arr[] = {2,4,6,8,9,2,1,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    int target = 9;
    cout<<printIndex(arr,n,0,target);
}