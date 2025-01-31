#include<iostream>
using namespace std;

int power(int x, int y){
    if(y==0){
        return 0;   //if input power is zero, returning zero
    }
    if(y==1){
        return x;   //base case
    }
    y--;          //decrement in power

    return power(x,y)*x;   //assumption & selfwork
}

int main(){
    cout<<"enter digit & power: ";
    int p,q;
    cin>>p>>q;   //taking input of digit and power

    int ans = power(p, q);
    cout<<ans;

 return 0;
}