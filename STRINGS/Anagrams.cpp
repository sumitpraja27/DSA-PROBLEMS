#include <iostream> 
#include <vector>
using namespace std;
bool isAnagram(string s1, string s2){
    // create the freq. array:
    vector <int> freq(26,0);
    // if length of s1 and s2 are different then return false
    if(s1.size()!=s2.size()){
        return false;
    }
    else {
        for(int i=0; i<s1.size(); i++){
        
        }
    }
}
int main(){
    string s1,s2;
    cin>>s1>>s2;

    if(isAnagram(s1,s2)){
        cout<<"string is Anagram";
    }
    else cout<<"string is not Anagram";
}