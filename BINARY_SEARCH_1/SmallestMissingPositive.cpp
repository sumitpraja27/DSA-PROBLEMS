#include <iostream>
using namespace std;
int main(){
    int arr[] = {0,1,2,3,4,8,8,9,12};
    int n = 9;
    // By using linear search
    for(int i=0; i<n; i++){
        if(i!= arr[i]){
            cout<<i;
            break; 
        }
    }
}