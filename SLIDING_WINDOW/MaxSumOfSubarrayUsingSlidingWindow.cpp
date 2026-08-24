#include <iostream>
using namespace std;
int main(){
    int arr[] = {7,1,2,5,8,4,9,3,6};
    int n = sizeof(arr)/sizeof(arr[0]);
    int k = 3;
    int maxSum = INT8_MIN;
    int maxIdx = -1;
    int sum = 0;
    // Sum of first subarray
    for(int i=0; i<k; i++){// O(k)
        sum += arr[i];
    }
    maxSum = sum;
    int i = 1;
    int j = k;
    // Sliding Window algorithm  
    while(j<n){// O(n-k)
        sum = sum + arr[j] - arr[i-1];
        if(maxSum<sum){
            maxSum = sum;
            maxIdx = i;
        }
        i++;
        j++;
    }// T.C: O(n) 
    cout<<maxSum<<endl;
    cout<<maxIdx;
}