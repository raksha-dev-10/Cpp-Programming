#include<iostream>
using namespace std;

int gcd(int x,int y){
    if(abs(x-y)==y || abs(x-y)==x){   //base case
        int a = abs(x-y);             //gcd = a
        cout<<a;
        return 0;
    }
    if(x>y){
        gcd(x-y,y);            //Euclidean Algorithm
    }
    else{
        gcd(x,y-x);            //Euclidean Algorithm
    }
    return 0;
}

int main(){
    int x= 54;
    int y= 72;
    
    gcd(x,y);

    return 0;
}