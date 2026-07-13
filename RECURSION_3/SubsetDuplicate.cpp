#include <iostream>
#include <vector>
using namespace std;
void duplicate(string ans, string original, vector<string>& v, bool flag){
if(original== ""){
v.push_back(ans);
return;
}
char ch = original[0];
if(original.length()==1){
    if(flag == true) duplicate(ans+ch,original.substr(1),v,true);
duplicate(ans,original.substr(1),v,true);
return;// taaki niche ki do conditiond na chale
}
char dh = original[1];
if(ch==dh){// duplicate
    if(flag==true) duplicate(ans+ch,original.substr(1),v,true);
duplicate(ans,original.substr(1),v,false);
}
else {// no duplicate
    if(flag==true) duplicate(ans+ch,original.substr(1),v,true);
duplicate(ans,original.substr(1),v,true);
}

}
int main(){
    string str = "aab";
    vector<string> v;
duplicate("",str,v,true);
for(int i=0; i<v.size(); i++){
    cout<<v[i]<<endl;
}
}