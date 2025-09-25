#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector <int> v;// you not need to mention the size.
    // inserting / input
   v.push_back(6);
   v.push_back(1);
   v.push_back(9);
   v.push_back(10);
   v.push_back(5);
   v.push_back(6);
   v.push_back(7);
   v.push_back(8);
   v.push_back(2);
   v.push_back(1);
   v.push_back(3);
   for(int i = 0; i<v.size(); i++){
cout<<v[i]<<" ";
   }
cout<<endl;
v.pop_back();
v.pop_back();

for(int i = 0; i<v.size(); i++){
    cout<<v[i]<<" ";
}
}