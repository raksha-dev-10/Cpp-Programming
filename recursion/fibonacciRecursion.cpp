#include<iostream>
using namespace std;

int fib(int n){
    if(n==2 || n==1){
        return 1;
    }
    int ans = fib(n-1)  + fib(n-2);
    return ans;
}


int main(){
    cout<<"position of fibonacci series to be found: ";
    int k;
    cin>>k;

    int i = fib(k);
    cout<<i;
    return 0;
}