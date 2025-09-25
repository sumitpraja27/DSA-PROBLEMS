#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number : ";
    cin>>n;
    int lastdigit = 0;
    int reverse = 0;
    while(n>0){
      reverse = reverse*10;
        lastdigit = n%10;
reverse = reverse + lastdigit;
n = n/10;
    }
    cout<<reverse<<endl;
}
