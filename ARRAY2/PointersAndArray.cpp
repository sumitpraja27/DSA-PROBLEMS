#include <iostream> 
using namespace std;
int main(){
    int arr[] = {1,2,3,4,5};
    int* ptr = &arr[0];
    cout<<ptr<<endl;
    // Different printing methods of array.
 //method 1
    for(int i = 0; i<=4; i++){
        cout<<ptr[i]<<" ";
    }
    cout<<endl;
// method 2
     for(int i = 0; i<=4; i++){
        cout<<i[ptr]<<" ";
    }
    cout<<endl;
// method 3
    for(int i = 0; i<=4; i++){
        cout<<*ptr<<" ";
        ptr++;
    }

}