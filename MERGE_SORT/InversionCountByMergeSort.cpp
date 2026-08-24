#include <iostream>
#include <vector> 
using namespace std;

int inversion(vector<int>& a, vector<int>& b){
    int count = 0;
    int i = 0;
    int j = 0;
    while(i<a.size() && j>b.size()){
        if(a[i]>b[j]){ 
        count += (a.size()-1);
        j++;
        }else {
            i++;// a[i]<=b[j]
        }
    }
    return count; 
}  
void merge(vector<int>& a, vector<int>& b, vector<int>& res ){
    int i = 0, j = 0, k = 0;    
    while(i<a.size() && j<b.size()){
        if(a[i]<b[j]){ res[k] = a[i];
        k++;
        i++;
        } else { // b[j]<a[i]
        res[k] = b[j];
        k++;        
        j++;
        }
    }
    if(i==a.size()){// a is at end
        while(j<b.size()){
            res[k] = b[j];
            k++;
            j++;
        }
    }
    if(j==b.size()){// b is at end
        while(i<a.size()){
            res[k] = a[i];
            k++;
            i++;
        }
    }
    
}
int mergeSort(vector<int>& v){ // This is dividing the array
    int count = 0   ;
    int n = v.size();
    if(n==1) return 0;
    int n1 = n/2, n2 = n-n/2;
    vector<int> a(n1);
    vector<int> b(n2);
    
    //Inserting the elements in a and b from vector v
    for(int i=0; i<n1; i++){
        a[i] = v[i];
    }
    for(int i=0; i<n2; i++){
        b[i] = v[i+n1];
    }
    // recursion
    count += mergeSort(a);
    count += mergeSort(b);
    // Count the inversions
    count += inversion(a,b);
    // merge arrays
    merge(a,b,v);
    a.clear(); // To delete the array "a" when it is of size 1
    b.clear(); // To delete the array "b" when it is of size 1

    // To reduce the SPACE Complexity CLEAR FUNC. is used
    return count;
}
int main(){ // T.C = O(n^2), S.C = O(1) 
    int arr[] = {5,1,3,0,4,9,6};
    int n = sizeof(arr)/sizeof(arr[0]);
    vector<int> v(arr,arr+n);
    for(int i=0; i<n; i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    mergeSort(v);
    cout<<mergeSort(v);
}