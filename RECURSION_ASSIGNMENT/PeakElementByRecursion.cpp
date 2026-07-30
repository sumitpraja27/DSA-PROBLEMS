#include <iostream> 
using namespace std;
void peakElement(int arr[], int n, int idx, int &peak){
// base case 
if(idx==n) return;

// recursive call
if(peak<arr[idx]) peak = arr[idx];
peakElement(arr,n,idx+1,peak);

}
int main(){
    int arr[] = {5,7,2,4,9,8,1};
    int n = sizeof(arr)/sizeof(arr[0]);
    int peak = INT16_MIN;
    peakElement(arr,n,0,peak);
    cout<<peak;
}