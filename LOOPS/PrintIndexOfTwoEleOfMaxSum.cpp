#include <iostream> 
using namespace std;
int main(){
    int arr[] = {2,1,4,5,2,6,7,3,1};
    int n = sizeof(arr)/sizeof(arr[0]);
    int target = 10;
    int lo = 0;
    int hi = n-1;
    for(int i=0; i<n; i++){
        if(arr[lo]+arr[hi]==target) {
        cout<<lo<<","<<hi<<endl;
        } else {
            lo++;
        hi--;
        }
        
    }
}