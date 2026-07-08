#include <iostream>
#include <utility> 
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of array: ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    for(int ele : arr){
        cout<<ele<<" ";
    }
    cout<<endl;
    // Selection sort
    for(int i=0; i<n-1; i++){
        int min = INT16_MAX;
        int minidx = -1;
        // Minimum element calculation in respective array
        for(int j=i; j<n; j++){
            if(arr[j]<min){
                min = arr[j];
                minidx = j;
            }
        }
         swap(arr[i], arr[minidx]);
    }
        for(int i=0; i<n; i++){
            cout<<arr[i]<<" ";
        }
       
} 