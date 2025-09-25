#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector <int> v;// you not need to mention the size.
    // inserting / input
    //  v.push_back(6);
    // cout<<v.size()<<endl;
    // v.push_back(1);
    // cout<<v.size()<<endl;
    // v.push_back(9);
    // cout<<v.size()<<endl;
    // v.push_back(0);
    // cout<<v.size()<<endl; 
    //capacity 
    v.push_back(6);
    cout<<v.capacity()<<endl;
    v.push_back(1);
    cout<<v.capacity()<<endl;
    v.push_back(9);
    cout<<v.capacity()<<endl;
    v.push_back(0);
    cout<<v.capacity()<<endl;
    // if you want to update / access.
    cout<<v[0]<<" "; 
    cout<<v[1]<<" "; 
    cout<<v[2]<<" "; 
    cout<<v[3]<<" "; 

}