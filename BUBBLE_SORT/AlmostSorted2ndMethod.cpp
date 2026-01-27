#include <iostream>
using namespace std;
int main(){
    int arr[] = {4,2,9,7,8};// not almost sorted
    int n = 5;
    bool flag = true;
    for(int i=0; i<n; i++){
        int count = 0;
        for(int j=0; j<n; j++){
            if(i==j) continue;
            if(arr[j]>arr[i]) count++;
        }
        int actualidx = n-count-i;
        int diff = actualidx - i;
        if(diff<0) diff = -diff;
        if(diff>0){
            flag = false;
            break;
        } 
        
    }
    cout<<flag;
}