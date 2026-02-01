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
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    // Insertion Sort 
    for(int i=1; i<n; i++){
        int j=i;
        while(j>=1){
        if(arr[j] >= arr[j-1]) break;
        else swap(arr[j], arr[j-1]);
        j--;
        }
    }
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    // Storing the sorted array inti an integer
    int x = 0;
    for(int i=0; i<n; i++){
        x *= 10;
        x += arr[i];
    }
    cout<<x;
    // For second minimum, we need to change the sorted array
    for(int i=n-1; i>=1; i--){
        if(arr[i]!= arr[i-1]){
            swap(arr[i], arr[i-1]);
            break;
        }
    }
    cout<<endl;

      for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    // Storing the sorted array inti an integer
    int y = 0;
    for(int i=0; i<n; i++){
        y *= 10;
        y += arr[i];
    }
    cout<<y<<endl;;
    cout<<"Minimum sum is: "<<x+y;
}