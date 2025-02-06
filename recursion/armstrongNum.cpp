#include<iostream>
#include <cmath>
using namespace std;

int armstrong(int n,int a =0,int k=0){
    if(n<=0){        //base case
        return 0;
    }
    a+=1;                  //getting num of digits
    armstrong(n/10,a,k);   
    k+=pow(n,a);
    return k==n? 1 : 0;    //1 for yes; 0 for no
}

int main(){
    int n= 370;

    cout<<armstrong(n);

    return 0;
}