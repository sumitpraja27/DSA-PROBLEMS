#include <iostream> 
#include <string>
#include <algorithm>
using namespace std;
int main(){
    string str = "hello";
    cout<<str<<endl;
    reverse(str.begin(), str.end());
    cout<<str<<endl;
    cout<<str.substr(0,2)<<endl;
    return 0;
}

