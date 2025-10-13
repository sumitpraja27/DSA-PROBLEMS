#include <iostream> 
using namespace std;
int main(){
    string str = "Sumit"; //STRING IS DYNAMIC -> RUNTIME RESIZE
    cout<<str <<endl;
    str = "Hello";
    cout<<str<<endl;

    string str1 = "Sumit";
    string str2 = " Prajapati";
    string str3 = str1 + str2;// Concatenation
    cout<<str3<<endl;
    cout<<"Enter the string: ";
    string string;
    getline(cin,string);
    cout<<"Output: "<<string<<endl;



}