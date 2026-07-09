#include <iostream>
using namespace std;

//***********/ using extra parameter*************
// void print(int i, int n){
//     if(i>n) return;
//     cout<<i<<endl;
//     print(i+1,n);
//}
int print(int n){
    // base case 
    if(n==0) return 0;
    //  recursive call
    print(n-1); // call
    cout<<n<<endl;// kaam
    
}
int main(){
    // **********using extra parameter***********
    int n;
    cout<<"Enter the n:";
    cin>>n;
    // print(1,n);



    print(n);


}