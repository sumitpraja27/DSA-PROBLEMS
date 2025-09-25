#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector <int> v;
    v.push_back(10);
    v.push_back(5);
    v.push_back(8);
    v.push_back(9);
    v.push_back(14);
    v.push_back(7);
    v.push_back(2);
    v.push_back(8);
    int x = 8;
    int index = -1;
    // for(int i = 0; i<v.size(); i++){
    //     if(v[i]==x){ 
    //         index = i;
    //         cout<<i<<endl; 
    //     }
    // }
    for(int i = v.size()-1; i>=0; i--){
        if(v[i]==x){
            index = i;
            break;
        }
    }
    cout<<index;

}