#include <iostream> 
#include <algorithm>
using namespace std;
int main(){
    int arr[6] = {5,-4,6,3,2,1};
    int n=6;
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    // BUBBLE SORT
    // for(int i=0; i<n-1; i++){// n-1 passes
    // // Traverse
    // for(int j=0; j<n-1-i; j++){
    //     if(arr[j]>arr[j+1]){// swap
    //         // int temp = arr[j];
    //         // arr[j] = arr[j+1];
    //         // arr[j+1] = temp;
    // swap(arr[j], arr[j+1]);
    //     }
    // }
    // }

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
    for(int i=0; i<n; i++){ 
        cout<<arr[i]<<" ";
    }
}