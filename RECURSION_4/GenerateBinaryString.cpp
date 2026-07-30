#include <iostream> 
#include <string> 
using namespace std;
int n = 3;
void generate(string s){
    // base case
    if(s.length()==n){
        cout<<s<<endl;
        return;
    }
    generate(s+'0');
    if(s=="" || s[s.length()-1]=='0') generate(s+'1'); 
}
int main(){
generate("");
} 