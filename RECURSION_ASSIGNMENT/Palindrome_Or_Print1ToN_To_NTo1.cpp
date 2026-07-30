#include <iostream>
using namespace std;
void print(int arr[], int n, int idx){
if(idx==n) return;
cout<<arr[idx]<<" ";
print(arr,n,idx+1);
// N to 1
cout<<arr[idx-1]<<" ";
// It is also called a PALINDROME.
}
int main(){
    int arr[] = {1,2,3,4,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    print(arr,n,0);
}