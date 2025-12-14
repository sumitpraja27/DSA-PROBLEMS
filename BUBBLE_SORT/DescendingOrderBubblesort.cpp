#include <iostream> 
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
    for(int i=0; i<n-1; i++){// for n-1 passes
     // traverse
        bool flag = true;
        for(int j=0; j<n-1-i; j++){
        if(arr[j]<arr[j+1]){
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


