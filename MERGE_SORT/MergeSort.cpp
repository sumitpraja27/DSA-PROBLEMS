#include <iostream> 
#include <vector> 
using namespace std;
// TIME COMPLEXITY: O(nlogn)
void merge(vector<int>& a, vector<int>& b, vector<int>& res ){
    int i = 0;
    int j = 0;
    int k = 0;
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
void divide(vector<int>& v){ // This is dividing the array
    int n = v.size();
    if(n==1) return;
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
    divide(a);
    divide(b);
    // merge arrays
    merge(a,b,v);
    a.clear(); // To delete the array "a" when it is of size 1
    b.clear(); // To delete the array "b" when it is of size 1

    // To reduce the SPACE Complexity CLEAR FUNC. is used
}

int main(){
    int arr[] = {5,1,3,0,4,9,6};
    int n = sizeof(arr)/sizeof(arr[0]);
    vector<int> v(arr,arr+n);
    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    divide(v);
    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }

}