#include<iostream>
using namespace std;
void display(int a[]){
for(int i = 0; i<=4; i++){
cout<<a[i]<<" ";
}
cout<<endl;
return;
}
void change(int b[]){
    b[0]=100;
}

int main(){
int arr[] = {1,2,3,4,5};
// ACCESSING THE ELEMENTS OF  ARRAY IN ANOTHER FUNCTION
display(arr);
change(arr);
display(arr);
}