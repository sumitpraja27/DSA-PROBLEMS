#include <iostream> 
#include <string>
using namespace std;
void removeChar(string ans, string original){
if(original.length()==0){
cout<<ans;
return;
}
char ch = original[0];
if(ch=='a') removeChar(ans,original.substr(1));
else removeChar(ans+ch,original.substr(1));
}
int main(){
    // string str = "Raghav Garg";
    // string s = "";
    // for(int i=0; i<str.length(); i++){
    //     if(str[i]!='a') s += str[i];
    // }
    // cout<<s;

    //*********USING RECURSION************
    string str = "raghav garg";
    removeChar("",str);
}