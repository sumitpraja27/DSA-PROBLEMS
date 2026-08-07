#include <iostream> 
#include <vector>
using namespace std;
int main(){
vector<int> v;
int n;
cout<<"Enter the size of array:";
cin>>n;
cout<<"Enter the elements:"; 
for(int i=0; i<n; i++){
    int q;
    cin>>q;
    v.push_back(q);
}
for(int i=0; i<v.size(); i++){
    cout<<v[i]<<" ";
}
}