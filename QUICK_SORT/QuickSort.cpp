#include <iostream>
using namespace std;// T.C: O(nlogn)
int partition(int arr[], int start, int end){
int pivotEle = arr[start];
int count = 0;
for(int i=start+1; i<=end; i++){
if(arr[i]<= pivotEle) count++;
}
int pivotIdx = count + start;
swap(arr[start],arr[pivotIdx]);
int i = start;
int j = end;
while(i<pivotIdx && j>pivotIdx){
    if(arr[i]<=pivotEle) i++;
    if(arr[j]>pivotEle) j--;
    else if(arr[i]>pivotEle && arr[j]<=pivotEle){
        swap(arr[i],arr[j]);
        i++;
        j--;
        }
    }
    return pivotIdx;

}
void quickSort(int arr[], int start, int end){
    // 5,1,8,2,7,6,3,4
    if(start>=end) return;// base case
int pivotIdx = partition(arr,start,end);
    // 4,1,3,2,5,7,8,6  
    quickSort(arr,start,pivotIdx-1);
    quickSort(arr,pivotIdx+1,end);

}
int main(){
    int arr[] = {5,1,8,2,7,6,3,4};
    int n = sizeof(arr)/sizeof(arr[0]);
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    quickSort(arr,0,n-1);
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}