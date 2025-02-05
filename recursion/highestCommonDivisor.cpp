#include<iostream>
using namespace std;

int gcd(int x, int y, int a){
    if(a==1){         //base case
        cout<<1;
        return 0;
    }
    if(x%a==0 && y%a==0){   //checking if a is 
        cout<<a;            //greatest common divisor
        return 0;
    }
    gcd(x, y, a-1);
    return 0;
}

int main(){
    int x= 12;
    int y= 24;
    int a= x;  //copying value of x in a variable

    gcd(x,y,a);

    return 0;
}