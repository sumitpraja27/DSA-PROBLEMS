#include <iostream>
#include <vector> 
using namespace std;
int main(){
    int arr[] = {19,12,23,8,16};
    int n = 5;
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    vector<int> v(n,0);  // 0 means not visted
    int x = 0;

    for(int i=0; i<n; i++){
        int min = INT16_MAX;
        int minidx = -1;
        for(int j=0; j<n; j++){
            if(v[j]==1) continue;
            else{
                if(min>arr[j]){
                min = arr[j];
                minidx = j;
                }   
            }
        }
        arr[minidx] = x;
        v[minidx] = 1;  //visited
        x++;
    }   
for(int i=0; i<n; i++){
    cout<<arr[i]<<" ";
}
cout<<endl;
}