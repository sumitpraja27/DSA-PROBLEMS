#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
   vector <int> v(5);
   cout<<"Enter the values of array : ";
    for(int i=0; i<5; i++){
        cin>>v[i];
    }

    sort(v.begin(), v.end());// O(nlogn)
     for(int i=0; i<5; i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    reverse(v.begin(), v.end());
     for(int i=0; i<5; i++){
        cout<<v[i]<<" ";
    }
}