#include<iostream>
using namespace std;

int sum(int x){
    if(x<=9){
        return x;   //if only first digit is left, return it;
    } 
    int a = x%10;   //getting last digit og the integer

    x=x/10;        //removing last digit from integer

    int ans= sum(x)+a;  //ans is sum of all digits + last digit
    return ans;
}

int main(){
    cout<<"enter an integer: ";
    int I;
    cin>>I;     //taking integer input

    int ans= sum(I);
    cout<<ans;

    return 0;
}