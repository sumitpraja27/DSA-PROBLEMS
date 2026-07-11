#include <iostream>
using namespace std;
// USING 4 PARAMETERS
int maze(int srow, int scol, int er, int ec){
if(srow>er|| scol>ec) return 0;
if(srow==er|| scol==ec) return 1;
int rightWays = maze(srow,scol+1,er,ec);
int downWays = maze(srow+1,scol,er,ec);
int totalWays = rightWays + downWays;
return totalWays; 
}
void printPath(int srow, int scol, int er, int ec, string s){
if(srow>er|| scol>ec) return ;
if(srow==er && scol==ec){// destination reached
cout<<s<<endl;
return;
}
printPath(srow,scol+1,er,ec,s+'R');// right
printPath(srow+1,scol,er,ec,s+'D');// down


}
int main(){
    // cout<<maze(0,0,2,2);
    printPath(1,1,3,3,"");
}