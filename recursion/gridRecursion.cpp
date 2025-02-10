#include<iostream>
using namespace std;

int fun(int i, int j, int m, int n){
    //base case 
    if(i==m-1 && j==n-1){
        return 1;
    }
    //returning if we are out of the grid
    if(i>=m || j>=n){
        return 0;
    }
    //adding all the possible ways to reach the target 
    return fun(i,j+1,m,n) + fun(i+1,j,m,n);

}

int main(){
    int m = 2;
    int n =3;

    cout<<fun(0,0,m,n);

    return 0;
}