#include <iostream> 
#include <algorithm>
using namespace std;
int main(){
    int arr[5] = {4,2,7,9,8};
    int n=5;
    int brr[5];
    for(int i=0; i<n; i++){// 4 2 7 9 8 
        cout<<arr[i]<<" ";
    }

    //********* BUBBLE SORT OPTIMIZED ******************

    for(int i=0; i<n-1; i++){// n-1 passes
    // Traverse
    bool flag = true;
    for(int j=0; j<n-1-i; j++){
        if(arr[j]>arr[j+1]){// swap
        swap(arr[j], arr[j+1]);
        flag = false;
        }
    }
    if(flag == true){// swap didn't happen
        break;
    }
    }
    cout<<endl;
    for(int i=0; i<n; i++){ // 2 4 7 8 9 
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    bool flag = true;
    // brr 4 2 7 9 8 
    // arr 2 4 7 8 9 
    for(int i=0; i<n; i++){
        if(i==0){
            if(brr[i]!= arr[i] && brr[i]!= arr[i+1]){
                flag = false;
                break;
            }
        }
        else if(i== n-1){
            if(brr[i]!= arr[i] && brr[i]!= arr[i-1]){
                flag = false;
                break;
            }
        }
        else {
            if(brr[i]!= arr[i] && brr[i]!= arr[i-1] && brr[i]!= arr[i+1]){
                flag = false;
                break;
            }
        }
    }
    cout<<flag;
}