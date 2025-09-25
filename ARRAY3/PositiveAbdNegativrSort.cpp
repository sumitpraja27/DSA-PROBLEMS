#include <iostream>
#include <vector>
using namespace std;
void sort01(vector <int> &v){
int n = v.size();
int i = 0;
int j = n-1;
for(int i=0; i<n; i++){
    if(v[i]<0){
        int temp = v[i];
       v[i] = v[j];
       v[j] = temp;   
    }
  }
}

int main(){
    vector <int> v;
    v.push_back(8);
    v.push_back(-1);
    v.push_back(3);
    v.push_back(4);
    v.push_back(-4);
    v.push_back(1);
    v.push_back(-7);
    v.push_back(2);

    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
sort01(v);
    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    // 
}