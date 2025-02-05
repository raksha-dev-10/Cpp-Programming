#include<iostream>
using namespace std;

int sum(int n){
    if(n==1){      //base case
        return 1;
    }
    int a=sum(n-1);
    if(n%2==0){
        a=a-n;     //subtracting evens
    }
    else{
        a=a+n;     //adding odds
    }
    return a;      

}

int main(){
    int n=10;

    cout<<sum(n);

    return 0;
}