#include<iostream>
#include<climits>
using namespace std;
int main(){
    int n;
    cout<<"Enter the sie of array: ";
    cin>>n;
    int arr[n];
    //input 
    for(int i=0; i<=n-1; i++){
        cin>>arr[i]; 
}
//int max = arr[0];
int min = INT8_MAX; 
for(int i = 1; i<=n-1; i++){
    if(min>arr[i]){
        min= arr[i]; 
    }
} 
cout<<min;
}