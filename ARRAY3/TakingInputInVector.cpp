#include <iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    vector<int> v;
    for(int i = 0; i<n; i++){
        int q;
        cin>>q;
        v.push_back(q);
        cout<<v[i]<<" ";
    }
    
}